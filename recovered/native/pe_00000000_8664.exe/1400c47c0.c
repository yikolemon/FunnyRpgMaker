/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c47c0 */

void FUN_1400c47c0(undefined8 param_1,uint param_2)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_b8 [36];
  uint local_94;
  undefined1 local_90 [12];
  undefined1 auStack_84 [4];
  undefined1 local_80 [8];
  float local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  if (((param_2 & 0x6000000) != 0) && ((param_2 & 0x40002) != 0)) goto LAB_1400c49ce;
  cVar3 = FUN_140094826("context",0);
  lVar2 = DAT_140f2a910;
  if (cVar3 == '\0') goto LAB_1400c49ce;
  iVar6 = 1;
  FUN_14008f7a2(0x10000,1);
  fVar1 = DAT_1402116fc;
  if ((param_2 & 0x6000000) == 0) {
    fVar11 = *(float *)(lVar2 + 0x1320) * DAT_1402116fc;
    local_94 = param_2;
    fVar10 = (float)FUN_14009376e();
    local_74 = FUN_14007b71f(fVar11 - (fVar10 + *(float *)(lVar2 + 0xe0c)),DAT_1401c86c8);
    local_78 = fVar1 * *(float *)(lVar2 + 0x1320);
    FUN_140093372(local_78);
    bVar7 = false;
    uVar9 = 0;
    do {
      if (bVar7) {
        FUN_1400b0bd1();
      }
      FUN_140091425(uVar9);
      cVar5 = (char)iVar6;
      uVar8 = (uint)bVar7 * 0x4000000 + (iVar6 << 0x19 | param_2 & 2) + 0x1a8;
      FUN_14009311d(local_80);
      cVar3 = FUN_1400b2126("##selectable",0,0,&local_78);
      if (cVar3 != '\0') {
        *(uint *)(lVar2 + 0x27dc) = uVar8 & 0x6000000 | *(uint *)(lVar2 + 0x27dc) & 0xf9ffffff;
      }
      FUN_140093139(local_80);
      uVar4 = (ulonglong)((uVar8 & 2) == 0);
      FUN_1401c5830(auStack_84 + uVar4 * 4,0,(uVar8 & 2) * 2);
      FUN_1401c5180(local_90,param_1,uVar4 * 4 + 0xc);
      FUN_1400c2b69("##previewing_picker",local_90,uVar8,0);
      FUN_140091667();
      uVar9 = 1;
      bVar7 = true;
      iVar6 = 0;
    } while (cVar5 != '\0');
    FUN_14009366e();
    if ((local_94 & 0x40002) == 0) {
      FUN_1400b0bd1();
      goto LAB_1400c49a8;
    }
  }
  else if ((param_2 & 0x40002) == 0) {
LAB_1400c49a8:
    thunk_FUN_1400af8bf("Alpha Bar",lVar2 + 0x27dc,0x40000);
  }
  FUN_14008f860();
  FUN_1400946ab();
LAB_1400c49ce:
  if (DAT_140f17b40 != (local_70 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_70 ^ (ulonglong)auStack_b8);
  }
  return;
}

