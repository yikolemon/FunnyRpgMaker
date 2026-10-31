/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010fae1 */

undefined8 * __fastcall FUN_1010fae1(undefined8 *param_1,int param_2)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  undefined2 in_FPUControlWord;
  float10 fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_28;
  longlong local_20;
  
  *param_1 = *(undefined8 *)(param_2 + 0xc4);
  local_28 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 0xa0) >> 0x20) +
                      (float)((ulonglong)*(undefined8 *)(param_2 + 0x98) >> 0x20) +
                      (float)((ulonglong)*(undefined8 *)(param_2 + 0xa8) >> 0x20),
                      (float)*(undefined8 *)(param_2 + 0xa0) +
                      (float)*(undefined8 *)(param_2 + 0x98) +
                      (float)*(undefined8 *)(param_2 + 0xa8));
  iVar5 = 0;
  pfVar4 = (float *)&local_28;
  bVar3 = true;
  do {
    bVar2 = bVar3;
    fVar7 = *(float *)(param_2 + 0xd4 + iVar5 * 4);
    if (DAT_102b89b4 <= fVar7) {
      fVar7 = *(float *)((int)param_1 + iVar5 * 4);
    }
    else {
      fVar1 = *(float *)(param_2 + 0xdc + iVar5 * 4);
      if (*(float *)(param_2 + 0xe4 + iVar5 * 4) <= 0.0) {
        fVar8 = *pfVar4;
      }
      else {
        fVar8 = *pfVar4;
        FUN_101270cc(fVar1);
      }
      fVar7 = fVar7 - fVar1 * (*(float *)(param_2 + 0x60 + iVar5 * 4) - fVar8);
    }
    fVar6 = (float10)FUN_100fdbca(fVar7,0);
    local_20 = (longlong)ROUND((float)fVar6 + DAT_102b70e0);
    *(float *)((int)param_1 + iVar5 * 4) = (float)local_20;
    if ((*(char *)(param_2 + 0xfc) == '\0') && (*(char *)(param_2 + 0xfe) == '\0')) {
      fVar6 = (float10)FUN_100ea38a((float)local_20,*(undefined4 *)(param_2 + 0xcc + iVar5 * 4),
                                    in_FPUControlWord);
      *(float *)((int)param_1 + iVar5 * 4) = (float)fVar6;
    }
    pfVar4 = (float *)((int)&local_28 + 4);
    iVar5 = 1;
    bVar3 = false;
  } while (bVar2);
  return param_1;
}

