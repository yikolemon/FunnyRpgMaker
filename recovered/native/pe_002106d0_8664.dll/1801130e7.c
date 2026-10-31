/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801130e7 */

void FUN_1801130e7(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  lVar2 = DAT_180419160;
  *(longlong *)(DAT_180419160 + 0x1608) = param_1;
  if (param_1 != 0) {
    *(longlong *)(lVar2 + 0x2ac0) =
         *(longlong *)(lVar2 + 0x15e0) + (longlong)*(int *)(lVar2 + 0x15d8) * 0x78 + -0x20;
    if ((longlong)*(int *)(param_1 + 0x210) == -1) {
      lVar3 = 0;
    }
    else {
      lVar3 = (longlong)*(int *)(param_1 + 0x210) * 0x250 + *(longlong *)(lVar2 + 0x2520);
    }
    *(longlong *)(lVar2 + 0x24f8) = lVar3;
    if ((*(byte *)(lVar2 + 0x34) & 0x10) != 0) {
      fVar4 = *(float *)(*(longlong *)(param_1 + 0x48) + 0x18);
      if ((fVar4 == 0.0) && (!NAN(fVar4))) {
        fVar4 = *(float *)(lVar2 + 0x40);
      }
      *(float *)(lVar2 + 0x132c) = fVar4;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x10e);
    *(undefined1 *)(param_1 + 0x10e) = 0;
    FUN_180116c2d(0);
    *(undefined1 *)(param_1 + 0x10e) = uVar1;
    FUN_18011c137();
    return;
  }
  *(undefined8 *)(lVar2 + 0x2ac0) = 0;
  *(undefined8 *)(lVar2 + 0x24f8) = 0;
  return;
}

