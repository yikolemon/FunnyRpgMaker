/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180111514 */

void FUN_180111514(float *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  undefined4 uVar5;
  
  lVar3 = DAT_180419160;
  lVar2 = *(longlong *)(DAT_180419160 + 0x1608);
  if (*(char *)(lVar2 + 0x10e) == '\0') {
    fVar4 = 0.0;
    if (0.0 <= param_2) {
      fVar4 = (float)FUN_180102463(0,*(float *)(lVar2 + 400) - param_2);
    }
    fVar1 = *(float *)(lVar2 + 0x15c + (ulonglong)*(byte *)(lVar2 + 0x198) * 8);
    fVar4 = (float)FUN_180102463(*(undefined4 *)(lVar2 + 0x184),
                                 (*(float *)(lVar2 + 0x15c) - fVar1) + param_1[1] + fVar4);
    *(float *)(lVar2 + 0x160) = *(float *)(lVar2 + 0x158) + *param_1;
    *(float *)(lVar2 + 0x164) = fVar1;
    *(float *)(lVar2 + 0x158) =
         (float)(int)(*(float *)(lVar2 + 0x60) + *(float *)(lVar2 + 0x19c) +
                     *(float *)(lVar2 + 0x1a0));
    *(float *)(lVar2 + 0x15c) = (float)(int)(fVar1 + fVar4 + *(float *)(lVar3 + 0xe08));
    uVar5 = FUN_180102463(*(undefined4 *)(lVar2 + 0x170));
    *(undefined4 *)(lVar2 + 0x170) = uVar5;
    uVar5 = FUN_180102463(*(undefined4 *)(lVar2 + 0x174),
                          *(float *)(lVar2 + 0x15c) - *(float *)(lVar3 + 0xe08));
    *(undefined4 *)(lVar2 + 0x174) = uVar5;
    *(float *)(lVar2 + 0x18c) = fVar4;
    *(undefined4 *)(lVar2 + 0x184) = 0;
    uVar5 = FUN_180102463(*(undefined4 *)(lVar2 + 400),param_2);
    *(undefined4 *)(lVar2 + 0x194) = uVar5;
    *(undefined4 *)(lVar2 + 400) = 0;
    *(undefined2 *)(lVar2 + 0x198) = 0;
    if (*(int *)(lVar2 + 0x214) == 0) {
      FUN_180119893(0,DAT_1802bb8e0);
      return;
    }
  }
  return;
}

