/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a8ba0 */

void FUN_1400a8ba0(undefined8 param_1,undefined4 *param_2,uint param_3,uint param_4,float param_5,
                  longlong param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  
  lVar3 = DAT_140f2a910;
  uVar10 = (ulonglong)param_4;
  if (param_4 == 0 || param_6 == 0) {
    lVar5 = FUN_14009a039(param_1,0);
    *(undefined4 **)(lVar5 + 0x18) = param_2;
    lVar4 = lVar5;
    lVar6 = param_6;
    if ((param_4 != 0 || param_6 == 0) && (lVar6 = FUN_14009a039(param_1,0), param_4 != 0)) {
      lVar4 = lVar6;
    }
  }
  else {
    *(undefined4 **)(param_6 + 0x18) = param_2;
    lVar4 = FUN_14009a039(param_1,0);
    lVar6 = lVar4;
    lVar5 = param_6;
  }
  *(undefined4 **)(lVar6 + 0x18) = param_2;
  FUN_1400a8d9a(lVar4,param_2);
  *(longlong *)(param_2 + 8) = lVar5;
  *(longlong *)(param_2 + 10) = lVar6;
  *(undefined8 *)(*(longlong *)(param_2 + uVar10 * 2 + 8) + 0x98) = *(undefined8 *)(param_2 + 0x26);
  param_2[0x18] = param_3;
  *(undefined8 *)(param_2 + 0x26) = 0;
  param_2[0x34] = param_2[0x34] & 0xffffffc0 | 9;
  uVar9 = (ulonglong)param_3;
  fVar11 = *(float *)(lVar3 + 0xdd0 + uVar9 * 4);
  fVar11 = (float)FUN_14007b71f((float)param_2[uVar9 + 0x14] - *(float *)(lVar3 + 0xed4),
                                fVar11 + fVar11);
  uVar2 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(lVar6 + 0x58) = uVar2;
  *(undefined8 *)(lVar5 + 0x58) = uVar2;
  *(float *)(lVar5 + 0x58 + uVar9 * 4) = (float)(int)(param_5 * fVar11);
  *(float *)(lVar6 + 0x58 + uVar9 * 4) = (float)(int)(fVar11 - (float)(int)(param_5 * fVar11));
  FUN_14009a0a2(*(undefined8 *)(param_2 + uVar10 * 2 + 8),param_2);
  FUN_14009a17d(*param_2,**(undefined4 **)(param_2 + uVar10 * 2 + 8));
  puVar8 = param_2;
  do {
    puVar7 = puVar8;
    puVar8 = *(undefined4 **)(puVar7 + 6);
  } while (puVar8 != (undefined4 *)0x0);
  FUN_1400a8dda(puVar7);
  FUN_1400a8e2b(param_2,*(undefined8 *)(param_2 + 0x12),*(undefined8 *)(param_2 + 0x14),0);
  uVar1 = param_2[1];
  *(undefined4 *)(lVar5 + 4) = uVar1;
  *(undefined4 *)(lVar6 + 4) = uVar1;
  *(uint *)(lVar4 + 8) = param_2[2] & 0x3f870;
  param_2[2] = param_2[2] & 0xfffc078f;
  *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 8) | *(uint *)(lVar5 + 4) | *(uint *)(lVar5 + 0xc);
  *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 8) | *(uint *)(lVar6 + 4) | *(uint *)(lVar6 + 0xc);
  param_2[4] = param_2[2] | param_2[1] | param_2[3];
  if ((*(byte *)(lVar4 + 0x11) & 8) != 0) {
    do {
      puVar8 = param_2;
      param_2 = *(undefined4 **)(puVar8 + 6);
    } while (param_2 != (undefined4 *)0x0);
    *(longlong *)(puVar8 + 0x28) = lVar4;
  }
  return;
}

