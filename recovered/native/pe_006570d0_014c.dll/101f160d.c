/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f160d */

int __fastcall FUN_101f160d(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_1c [6];
  short local_16;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_1c;
  iVar1 = FUN_101c461e(param_1,0);
  if ((((iVar1 == 0) && (iVar1 = FUN_101f16b9(auStack_1c), iVar1 == 0)) &&
      ((local_16 == -0x7fff || (iVar1 = FUN_101c461e(param_1,0), iVar1 == 0)))) &&
     (iVar1 = FUN_101c4b69(param_1,param_3), iVar1 == 0)) {
    iVar1 = FUN_102595e0(*(undefined4 *)(param_1 + 0x20),param_2,param_3);
    iVar1 = (uint)(iVar1 != 0) * 2;
    FUN_101c4c66(param_1);
  }
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar1;
}

