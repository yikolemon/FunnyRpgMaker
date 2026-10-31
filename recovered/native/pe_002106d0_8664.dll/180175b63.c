/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180175b63 */

longlong FUN_180175b63(longlong param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  if (param_1 != 0) {
    lVar3 = FUN_180178ee1(param_2,param_3,4,0);
    fVar2 = DAT_1802dc270;
    fVar1 = DAT_1802dbb2c;
    if (lVar3 != 0) {
      if (0 < param_3 * param_2) {
        uVar6 = 0;
        lVar5 = lVar3;
        lVar7 = param_1;
        do {
          lVar4 = 0;
          do {
            fVar8 = (float)FUN_1802886b0(*(undefined4 *)(lVar7 + lVar4 * 4));
            fVar9 = fVar8 * fVar2 + fVar1;
            fVar8 = 0.0;
            if (0.0 <= fVar9) {
              fVar8 = fVar9;
            }
            fVar9 = fVar2;
            if (fVar8 <= fVar2) {
              fVar9 = fVar8;
            }
            *(char *)(lVar5 + lVar4) = (char)(int)fVar9;
            lVar4 = lVar4 + 1;
          } while (lVar4 != 3);
          fVar9 = *(float *)(param_1 + 0xc + uVar6 * 0x10) * fVar2 + fVar1;
          fVar8 = 0.0;
          if (0.0 <= fVar9) {
            fVar8 = fVar9;
          }
          fVar9 = fVar2;
          if (fVar8 <= fVar2) {
            fVar9 = fVar8;
          }
          *(char *)(lVar3 + 3 + uVar6 * 4) = (char)(int)fVar9;
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 4;
          lVar7 = lVar7 + 0x10;
        } while (uVar6 != (uint)(param_3 * param_2));
      }
      thunk_FUN_180290e40(param_1);
      return lVar3;
    }
    thunk_FUN_180290e40(param_1);
    FUN_1801765d0("outofmem");
  }
  return 0;
}

