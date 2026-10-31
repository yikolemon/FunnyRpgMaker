/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ed648 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407ed648(ulonglong param_1)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  float fVar8;
  
  puVar4 = (undefined1 *)(ulonglong)((int)&stack0xfffffffffffffff0 - 0x30);
  uVar7 = param_1 & 0xffffffff;
  uVar2 = *(uint *)(param_1 + 0x48);
  uVar1 = *(ushort *)((ulonglong)uVar2 + 0x26);
  puVar5 = (undefined8 *)puVar4;
  if (uVar1 != 0) {
    puVar5 = (undefined8 *)(puVar4 + -8);
    puVar6 = puVar4 + -8;
    *(ulonglong *)(puVar4 + -8) = (ulonglong)uVar1;
    *(undefined8 *)(puVar4 + -0x10) = 0x1407ed671;
    lVar3 = FUN_1407eae26(uVar7);
    if ((int)lVar3 != 0) goto LAB_1407ed6d7;
  }
  puVar5[-1] = 0x20;
  puVar5[-2] = 0x1407ed67e;
  lVar3 = FUN_1407eae26(uVar7);
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)(puVar5 + -1) = 0;
  if ((int)lVar3 == 0) {
    fVar8 = (float)(int)(*(float *)(uVar7 + 0x10) * _DAT_150aa6542 + _DAT_150aa479a);
  }
  else {
    fVar8 = *(float *)(lVar3 + 4);
  }
  *(float *)(((ulonglong)(puVar5 + -1) & 0xffffffff) + 4) = fVar8;
  puVar5[-2] = (ulonglong)(puVar5 + -1) & 0xffffffff;
  puVar5[-3] = 0;
  puVar5[-4] = uVar7;
  puVar5[-5] = *(undefined8 *)((ulonglong)uVar2 + 4);
  puVar5[-6] = 0x1407ed6d4;
  lVar3 = FUN_1407e81fa();
  puVar6 = (undefined1 *)(ulonglong)((int)(puVar5 + -5) + 0x10);
LAB_1407ed6d7:
  *(int *)(uVar7 + 0x30) = ((int)lVar3 - *(int *)(uVar7 + 0x2c) >> 2) * -0x45d1745d;
  *(undefined4 *)(uVar7 + 0xc) = *(undefined4 *)(lVar3 + 4);
  if (_DAT_150b763fe == (*(uint *)(puVar6 + 0x2c) ^ (uint)puVar6)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar6 + -8) = FUN_1407ed713;
  FUN_1408802b0(*(uint *)(puVar6 + 0x2c) ^ (uint)puVar6);
}

