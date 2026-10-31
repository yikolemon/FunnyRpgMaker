/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044c190 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14044c190(undefined8 param_1,ulonglong *param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [28];
  uint local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  iVar1 = (*(code *)s_GetLogicalProcessorInformationEx_14059df28._16_8_)(param_1,0x12,param_2,0x18);
  if ((iVar1 == 0) && ((iVar1 = (*_DAT_14059df60)(), iVar1 == 0x32 || (iVar1 == 0x57)))) {
    iVar1 = (*(code *)s_GetLogicalProcessorInformationEx_14059df28._8_8_)(param_1,local_48);
    if (iVar1 == 0) {
      (*_DAT_14059df60)();
    }
    else {
      *param_2 = (ulonglong)local_2c;
      *(undefined4 *)(param_2 + 1) = local_1c;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_18;
      param_2[2] = 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_10 ^ (ulonglong)auStack_68);
}

