/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140057e78 */

undefined8 FUN_140057e78(DWORD param_1)

{
  BOOL BVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hProcess;
  undefined4 extraout_var;
  undefined8 uVar4;
  
  hProcess = OpenProcess(1,0,param_1);
  if (hProcess == (HANDLE)0x0) {
    uVar4 = FUN_140057f05(&PTR_DAT_140f17d00,&DAT_140edaa56);
    uVar4 = FUN_140058124(uVar4,param_1);
    uVar4 = FUN_140057f05(uVar4,&DAT_140edad6d);
    DVar3 = GetLastError();
    uVar4 = FUN_140058124(uVar4,DVar3);
    FUN_140058307(uVar4);
    uVar4 = 0;
  }
  else {
    BVar1 = TerminateProcess(hProcess,0);
    BVar2 = CloseHandle(hProcess);
    uVar4 = CONCAT71((int7)(CONCAT44(extraout_var,BVar2) >> 8),BVar1 != 0);
  }
  return uVar4;
}

