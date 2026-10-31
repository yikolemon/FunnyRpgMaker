/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14035eac5 */

void FUN_14035eac5(longlong param_1)

{
  float fVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = DAT_14062a630;
  lVar3 = *(longlong *)(DAT_14062a630 + 0x1608);
  fVar7 = (float)FUN_140313933(param_1,*(undefined4 *)(lVar3 + 700));
  if (((*(byte *)(param_1 + 6) & 8) != 0) && (*(longlong *)(lVar5 + 0x24f8) != 0)) {
    FUN_140313933();
  }
  fVar8 = (float)FUN_1403000b2();
  if (fVar7 < fVar8) {
    fVar1 = *(float *)(param_1 + 0x1c);
    if (*(short *)(param_1 + 0x24) != -1) {
      FUN_14037c1e7();
    }
    uVar4 = *(undefined8 *)(lVar3 + 800);
    uVar2 = *(undefined4 *)(lVar5 + 0xe7c);
    uVar6 = FUN_14031276b(0x37,DAT_1404bda40);
    FUN_1403a3f56(uVar4,(float)(int)fVar1,fVar7,fVar8,uVar6,uVar2);
    if (*(short *)(param_1 + 0x24) != -1) {
      FUN_14037c24e();
      return;
    }
  }
  return;
}

