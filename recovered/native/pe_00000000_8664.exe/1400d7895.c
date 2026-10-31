/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d7895 */

bool FUN_1400d7895(uint param_1,uint param_2)

{
  HMODULE hModule;
  undefined8 uVar1;
  INT_PTR IVar2;
  bool bVar3;
  undefined1 auStack_168 [44];
  undefined4 local_13c;
  uint local_138;
  uint local_134;
  undefined1 local_130 [272];
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_168;
  if (DAT_140f2b270 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_140f2b270 = GetProcAddress(hModule,"RtlVerifyVersionInfo");
    }
    if (DAT_140f2b270 == (FARPROC)0x0) {
      bVar3 = false;
      goto LAB_1400d795e;
    }
  }
  FUN_1401c5830(local_130,0,0x110);
  local_13c = 0x11c;
  local_138 = param_1 & 0xffff;
  local_134 = param_2 & 0xffff;
  uVar1 = VerSetConditionMask(0,2,3);
  uVar1 = VerSetConditionMask(uVar1,1,3);
  IVar2 = (*DAT_140f2b270)(&local_13c,3,uVar1);
  bVar3 = (int)IVar2 == 0;
LAB_1400d795e:
  if (DAT_140f17b40 != (local_20 ^ (ulonglong)auStack_168)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_20 ^ (ulonglong)auStack_168);
  }
  return bVar3;
}

