/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001db2c */

undefined4 __fastcall FUN_1001db2c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  if (0x3e6 < iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1001d9e4(0xc);
  }
  if (*(int *)(param_1 + 0x48) == 0x29 && (*(uint *)(param_1 + 0x38) & 0x4000000) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1001d9e4(5);
  }
  if ((*(int *)(param_1 + 0x48) == 0x3f & (byte)(*(uint *)(param_1 + 0x38) >> 5) & 7) == 1) {
    FUN_1001d8ea();
    iVar1 = *(int *)(param_1 + 0x48);
    FUN_1001d8ea();
    if (iVar1 == 0x3d) {
      uVar2 = 0;
    }
    else {
      if (iVar1 == 0x3a) goto LAB_1001db9c;
      if (iVar1 != 0x21) {
                    /* WARNING: Subroutine does not return */
        FUN_1001d9e4(10);
      }
      uVar2 = 1;
    }
    FUN_1001f362(uVar2);
    uVar2 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x41) & 2) == 0) {
      FUN_1001f38e();
    }
    else {
LAB_1001db9c:
      FUN_1001f33e();
    }
    uVar2 = 1;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return uVar2;
}

