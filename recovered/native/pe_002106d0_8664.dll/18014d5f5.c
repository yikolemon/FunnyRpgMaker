/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014d5f5 */

void FUN_18014d5f5(longlong param_1)

{
  float fVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = DAT_180419160;
  lVar3 = *(longlong *)(DAT_180419160 + 0x1608);
  fVar7 = (float)FUN_180102463(param_1,*(undefined4 *)(lVar3 + 700));
  if (((*(byte *)(param_1 + 6) & 8) != 0) && (*(longlong *)(lVar5 + 0x24f8) != 0)) {
    FUN_180102463();
  }
  fVar8 = (float)FUN_1800eebe2();
  if (fVar7 < fVar8) {
    fVar1 = *(float *)(param_1 + 0x1c);
    if (*(short *)(param_1 + 0x24) != -1) {
      FUN_18016ad17();
    }
    uVar4 = *(undefined8 *)(lVar3 + 800);
    uVar2 = *(undefined4 *)(lVar5 + 0xe7c);
    uVar6 = FUN_18010129b(0x37,DAT_1802ac570);
    FUN_180192a86(uVar4,(float)(int)fVar1,fVar7,fVar8,uVar6,uVar2);
    if (*(short *)(param_1 + 0x24) != -1) {
      FUN_18016ad7e();
      return;
    }
  }
  return;
}

