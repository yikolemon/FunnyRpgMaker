/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c6525 */

void FUN_1400c6525(longlong param_1)

{
  float fVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = DAT_140f2a910;
  lVar3 = *(longlong *)(DAT_140f2a910 + 0x1608);
  fVar7 = (float)FUN_14007b71f(param_1,*(undefined4 *)(lVar3 + 700));
  if (((*(byte *)(param_1 + 6) & 8) != 0) && (*(longlong *)(lVar5 + 0x24f8) != 0)) {
    FUN_14007b71f();
  }
  fVar8 = (float)FUN_14004863e();
  if (fVar7 < fVar8) {
    fVar1 = *(float *)(param_1 + 0x1c);
    if (*(short *)(param_1 + 0x24) != -1) {
      FUN_140112ce7();
    }
    uVar4 = *(undefined8 *)(lVar3 + 800);
    uVar2 = *(undefined4 *)(lVar5 + 0xe7c);
    uVar6 = FUN_14007a557(0x37,DAT_1401c86c8);
    FUN_1400ddffa(uVar4,(float)(int)fVar1,fVar7,fVar8,uVar6,uVar2);
    if (*(short *)(param_1 + 0x24) != -1) {
      FUN_140112d4e();
      return;
    }
  }
  return;
}

