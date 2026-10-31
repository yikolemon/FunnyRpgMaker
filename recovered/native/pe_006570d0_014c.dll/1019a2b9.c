/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019a2b9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_1019a2b9(uint param_1,uint param_2)

{
  HMODULE hModule;
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uStack_14c;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 local_12c;
  uint local_128;
  uint local_124;
  undefined1 local_120 [272];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_12c;
  if (DAT_103a33b4 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_103a33b4 = GetProcAddress(hModule,"RtlVerifyVersionInfo");
    }
    if (DAT_103a33b4 == (FARPROC)0x0) {
      bVar2 = false;
      goto LAB_1019a366;
    }
  }
  local_13c = 0x1019a319;
  _memset(local_120,0,0x110);
  local_12c = 0x11c;
  local_128 = param_1 & 0xffff;
  local_124 = param_2 & 0xffff;
  local_13c = _DAT_10301c00;
  uStack_140 = 0x1019a345;
  uStack_14c = VerSetConditionMask();
  uStack_140 = 3;
  uStack_144 = 1;
  uVar3 = VerSetConditionMask();
  iVar1 = (*DAT_103a33b4)(&uStack_14c,3,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  bVar2 = iVar1 == 0;
LAB_1019a366:
  if (DAT_10388d00 != (local_10 ^ (uint)&local_12c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return bVar2;
}

