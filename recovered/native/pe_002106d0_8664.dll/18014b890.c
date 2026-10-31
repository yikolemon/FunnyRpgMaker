/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014b890 */

void FUN_18014b890(undefined8 param_1,uint param_2)

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
  
  local_70 = DAT_180402640 ^ (ulonglong)auStack_b8;
  if (((param_2 & 0x6000000) != 0) && ((param_2 & 0x40002) != 0)) goto LAB_18014ba9e;
  cVar3 = FUN_18011b56a("context",0);
  lVar2 = DAT_180419160;
  if (cVar3 == '\0') goto LAB_18014ba9e;
  iVar6 = 1;
  FUN_18011648a(0x10000,1);
  fVar1 = DAT_1802de98c;
  if ((param_2 & 0x6000000) == 0) {
    fVar11 = *(float *)(lVar2 + 0x1320) * DAT_1802de98c;
    local_94 = param_2;
    fVar10 = (float)FUN_18011a456();
    local_74 = FUN_180102463(fVar11 - (fVar10 + *(float *)(lVar2 + 0xe0c)),DAT_1802ac570);
    local_78 = fVar1 * *(float *)(lVar2 + 0x1320);
    FUN_18011a05a(local_78);
    bVar7 = false;
    uVar9 = 0;
    do {
      if (bVar7) {
        FUN_180137ca1();
      }
      FUN_18011810d(uVar9);
      cVar5 = (char)iVar6;
      uVar8 = (uint)bVar7 * 0x4000000 + (iVar6 << 0x19 | param_2 & 2) + 0x1a8;
      FUN_180119e05(local_80);
      cVar3 = FUN_1801391f6("##selectable",0,0,&local_78);
      if (cVar3 != '\0') {
        *(uint *)(lVar2 + 0x27dc) = uVar8 & 0x6000000 | *(uint *)(lVar2 + 0x27dc) & 0xf9ffffff;
      }
      FUN_180119e21(local_80);
      uVar4 = (ulonglong)((uVar8 & 2) == 0);
      FUN_1802a89a0(auStack_84 + uVar4 * 4,0,(uVar8 & 2) * 2);
      FUN_1802a82f0(local_90,param_1,uVar4 * 4 + 0xc);
      FUN_180149c39("##previewing_picker",local_90,uVar8,0);
      FUN_18011834f();
      uVar9 = 1;
      bVar7 = true;
      iVar6 = 0;
    } while (cVar5 != '\0');
    FUN_18011a356();
    if ((local_94 & 0x40002) == 0) {
      FUN_180137ca1();
      goto LAB_18014ba78;
    }
  }
  else if ((param_2 & 0x40002) == 0) {
LAB_18014ba78:
    thunk_FUN_18013698f("Alpha Bar",lVar2 + 0x27dc,0x40000);
  }
  FUN_180116548();
  FUN_18011b3ef();
LAB_18014ba9e:
  if (DAT_180402640 != (local_70 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_70 ^ (ulonglong)auStack_b8);
  }
  return;
}

