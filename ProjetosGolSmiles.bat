@echo off
echo.
chcp 65001 > nul

set "firefoxPath=C:\Program Files\Mozilla Firefox\firefox.exe"
set "edgePath=C:\Program Files (x86)\Microsoft\Edge\Application\msedge.exe"
set "chromePath=C:\Program Files (x86)\Google\Chrome\Application\chrome.exe"

echo Ok. Confira as opções abaixo:
echo 1.Coleção de links 1
echo 2.Coleção de links 2
::inclua quantas opções desejar, e dentro da estrutura `if`, inclua quantos links desejar

set /p escolha=Digite o número da opção desejada:

if "%escolha%"=="1" (
    start "link 1" "%edgePath%" "https://www.link1.com"
    start "link 2" "%edgePath%" "https://www.link2.com"
)

if "%escolha%"=="2" (
    start "link 1" "%edgePath%" "https://www.link1.com"
    start "link 2" "%edgePath%" "https://www.link2.com"
)
exit