/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100940fe */

undefined4 __fastcall FUN_100940fe(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  
  if ((*(ushort *)(param_1 + 0x4e) == 0x62 & (byte)(*(uint *)(param_1 + 0x38) >> 0xd)) == 1) {
    FUN_1009301c();
    uVar2 = 8;
LAB_10094161:
    *(undefined2 *)(param_1 + 0x50) = uVar2;
  }
  else {
    if ((*(uint *)(param_1 + 0x38) & 0x80080) != 0) {
      iVar3 = *(ushort *)(param_1 + 0x4e) - 0x30;
      if ((ushort)iVar3 < 10) {
        *(int *)(param_1 + 0x44) = iVar3;
        FUN_1009301c();
        if ((((*(byte *)(param_1 + 0x3a) & 8) == 0) || (*(int *)(param_1 + 0x44) != 0)) ||
           ((ushort)(*(short *)(param_1 + 0x4e) - 0x30U) < 10)) goto LAB_1009419b;
        uVar2 = 0;
        goto LAB_10094161;
      }
      *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    }
    cVar1 = FUN_100933cc(1);
    if (cVar1 == '\0') {
      if (((*(byte *)(param_1 + 0x3a) & 1) != 0) && (cVar1 = FUN_100934c6(0), cVar1 != '\0')) {
        return 2;
      }
LAB_1009419b:
                    /* WARNING: Subroutine does not return */
      FUN_1001d9e4(2);
    }
  }
  return 1;
}

