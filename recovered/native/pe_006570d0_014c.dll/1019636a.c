/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019636a */

undefined4 __thiscall FUN_1019636a(int param_1,int param_2,byte *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 != (byte *)0x0) {
    iVar2 = param_1 + 0x30;
    if (param_2 != 0) {
      iVar2 = param_2;
    }
    uVar1 = (**(code **)(&UNK_103a61b4 + (uint)*param_3 * 8))
                      (&DAT_103a61b0 + (uint)*param_3 * 8,iVar2,param_3);
    return uVar1;
  }
  SetLastError(0xd);
  return 0;
}

