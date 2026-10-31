/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401296e1 */

undefined1 FUN_1401296e1(undefined8 *param_1,int param_2,uint *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0xc) != 0x6f75746c) {
    uVar2 = 1;
    if (*(int *)(param_1 + 0xc) == 0x53564720) {
      plVar3 = (longlong *)FUN_1401299f6(*param_1,"ot-svg");
      uVar2 = (*(code *)**(undefined8 **)(*plVar3 + 0x18))(plVar3,param_1,0);
    }
    goto LAB_14012995b;
  }
  if (param_3 == (uint *)0x0) {
    uVar6 = 0;
    uVar9 = 0;
  }
  else {
    uVar6 = *param_3;
    uVar9 = param_3[1];
  }
  FUN_140129a57(param_1 + 0x13,&local_58);
  iVar8 = ((int)local_58 >> 6) + ((int)uVar6 >> 6);
  iVar10 = ((int)local_54 >> 6) + ((int)uVar9 >> 6);
  iVar11 = ((int)local_50 >> 6) + ((int)uVar6 >> 6);
  iVar5 = ((int)local_4c >> 6) + ((int)uVar9 >> 6);
  local_58 = (local_58 & 0x3f) + (uVar6 & 0x3f);
  local_54 = (local_54 & 0x3f) + (uVar9 & 0x3f);
  local_50 = (local_50 & 0x3f) + (uVar6 & 0x3f);
  local_4c = (local_4c & 0x3f) + (uVar9 & 0x3f);
  if (param_2 == 4) {
    cVar4 = '\x06';
LAB_140129841:
    FUN_140129336(&local_58,param_1,param_2);
LAB_140129854:
    iVar8 = ((int)local_58 >> 6) + iVar8;
    iVar11 = ((int)(local_50 + 0x3f) >> 6) + iVar11;
    iVar5 = ((int)(local_4c + 0x3f) >> 6) + iVar5;
    iVar7 = ((int)local_54 >> 6) + iVar10;
  }
  else {
    if (param_2 == 3) {
      cVar4 = '\x05';
      goto LAB_140129841;
    }
    cVar4 = '\x02';
    if (param_2 != 2) goto LAB_140129854;
    iVar8 = (local_58 + 0x1f >> 6) + iVar8;
    iVar11 = (local_50 + 0x20 >> 6) + iVar11;
    if (iVar8 == iVar11) {
      if ((int)((local_58 + 0x1f & 0x3f) + (local_50 + 0x20 & 0x3f) + -0x1f) < 0x20) {
        iVar11 = iVar8;
        iVar8 = iVar8 + -1;
      }
      else {
        iVar11 = iVar8 + 1;
      }
    }
    iVar10 = (local_54 + 0x1f >> 6) + iVar10;
    iVar5 = (local_4c + 0x20 >> 6) + iVar5;
    cVar4 = '\x01';
    iVar7 = iVar10;
    if (iVar10 == iVar5) {
      if ((int)((local_54 + 0x1f & 0x3f) + (local_4c + 0x20 & 0x3f) + -0x1f) < 0x20) {
        iVar7 = iVar10 + -1;
        iVar5 = iVar10;
      }
      else {
        iVar5 = iVar10 + 1;
      }
    }
  }
  uVar6 = iVar11 - iVar8;
  iVar10 = iVar5 - iVar7;
  uVar2 = true;
  if ((((iVar11 < 0x1000000) && (-0x1000001 < iVar8)) && ((int)uVar6 < 0x10000)) &&
     (((iVar10 < 0x10000 && (-0x1000001 < iVar7)) && (iVar5 < 0x1000000)))) {
    if (param_1[1] == 0) {
      uVar2 = false;
    }
    else {
      lVar1 = *(longlong *)(param_1[1] + 0x80);
      if ((int)uVar6 <= (int)((uint)*(ushort *)(lVar1 + 0x18) * 10)) {
        uVar2 = (int)((uint)*(ushort *)(lVar1 + 0x1a) * 10) < iVar10;
      }
    }
  }
  uVar9 = uVar6;
  if (cVar4 == '\x06') {
    iVar10 = iVar10 * 3;
  }
  else if (cVar4 == '\x05') {
    iVar11 = uVar6 * 3;
    uVar6 = uVar6 * 3;
    uVar9 = iVar11 + 3U & 0xfffffffc;
  }
  else if (cVar4 == '\x01') {
    uVar9 = (int)(uVar6 + 0xf) >> 3 & 0xfffffffe;
  }
  *(int *)(param_1 + 0x12) = iVar8;
  *(int *)((longlong)param_1 + 0x94) = iVar5;
  *(char *)((longlong)param_1 + 0x82) = cVar4;
  *(undefined2 *)(param_1 + 0x10) = 0x100;
  *(uint *)((longlong)param_1 + 0x6c) = uVar6;
  *(int *)(param_1 + 0xd) = iVar10;
  *(uint *)(param_1 + 0xe) = uVar9;
LAB_14012995b:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_78);
  }
  return uVar2;
}

