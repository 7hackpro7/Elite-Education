.\packages\OpenCover.4.6.519\tools\OpenCover.Console.exe -register:user "-filter:+[GAME*]* " "-target:.\packages\NUnit.Runners.2.6.4\tools\nunit-console-x86.exe" "-targetargs:.\GAME\DemoTest.cs"

.\packages\ReportGenerator.3.1.2\tools\ReportGenerator.exe "-reports:results.xml" "-targetdir:.\coverage"

pause