param(
    [Parameter(Position = 0)]
    [string]$SourceFile,
    [switch]$CompileOnly
)

$compiler = 'C:\Program Files (x86)\Embarcadero\Dev-Cpp\TDM-GCC-64\bin\g++.exe'

if (-not (Test-Path -LiteralPath $compiler))
{
    Write-Host 'Khong tim thay TDM-GCC cua Dev-C++.' -ForegroundColor Red
    exit 1
}

if ([string]::IsNullOrWhiteSpace($SourceFile))
{
    $SourceFile = Read-Host 'Nhap duong dan file .cpp'
}

try
{
    $source = (Resolve-Path -LiteralPath $SourceFile -ErrorAction Stop).Path
}
catch
{
    Write-Host 'Khong tim thay file nguon.' -ForegroundColor Red
    exit 1
}

if ([IO.Path]::GetExtension($source).ToLower() -ne '.cpp')
{
    Write-Host 'Chi chap nhan file .cpp.' -ForegroundColor Red
    exit 1
}

$buildRoot = Join-Path ([IO.Path]::GetTempPath()) ('oop-study-' + [guid]::NewGuid().ToString('N'))
$program = Join-Path $buildRoot 'program.exe'
New-Item -ItemType Directory -Path $buildRoot | Out-Null

try
{
    Write-Host "Dang bien dich: $source" -ForegroundColor Cyan
    & $compiler -std=gnu++14 -Wall -Wextra -pedantic $source -o $program
    if ($LASTEXITCODE -ne 0)
    {
        Write-Host 'Bien dich that bai.' -ForegroundColor Red
        exit $LASTEXITCODE
    }

    Write-Host 'Bien dich thanh cong.' -ForegroundColor Green
    if (-not $CompileOnly)
    {
        Write-Host 'Dang chay chuong trinh...' -ForegroundColor Cyan
        Push-Location $PSScriptRoot
        try
        {
            & $program
        }
        finally
        {
            Pop-Location
        }
    }
}
finally
{
    if (Test-Path -LiteralPath $buildRoot)
    {
        Remove-Item -LiteralPath $buildRoot -Recurse -Force
    }
}
