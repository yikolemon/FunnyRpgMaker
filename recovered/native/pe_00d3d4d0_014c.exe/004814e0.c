/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004814e0 */

uint __cdecl
FUN_004814e0(LPWSTR param_1,byte *param_2,uint param_3,undefined4 param_4,UINT *param_5)

{
  byte *pbVar1;
  byte bVar2;
  UINT UVar3;
  int iVar4;
  __acrt_ptd *p_Var5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int local_8;
  
  if (param_3 == 0) {
    return 0;
  }
  bVar2 = *param_2;
  if (bVar2 == 0) {
    *param_1 = L'\0';
    return 0;
  }
  if (param_5[2] != 0) {
LAB_0048164d:
    *param_1 = (ushort)bVar2;
    return 1;
  }
  UVar3 = param_5[1];
  if (UVar3 == 1) {
LAB_00481622:
    iVar4 = MultiByteToWideChar(*param_5,9,(LPCSTR)param_2,1,param_1,1);
    if (iVar4 != 0) {
      return 1;
    }
    goto LAB_00481638;
  }
  if (UVar3 == 2) {
    if ((*(byte *)((bVar2 >> 3) + 0xc + (int)param_5) & (byte)(1 << (bVar2 & 7))) == 0) {
      uVar6 = 1;
    }
    else {
      if (param_3 == 1) {
        return 0xfffffffe;
      }
      uVar6 = 2;
    }
    iVar4 = MultiByteToWideChar(*param_5,9,(LPCSTR)param_2,uVar6,param_1,1);
    if (iVar4 != 0) {
      return uVar6;
    }
    goto LAB_00481638;
  }
  if (UVar3 != 4) goto LAB_00481622;
  if (-1 < (char)bVar2) goto LAB_0048164d;
  if ((bVar2 & 0xe0) == 0xc0) {
    uVar6 = bVar2 & 0x1f;
    local_8 = 1;
  }
  else {
    if ((bVar2 & 0xf0) != 0xe0) goto LAB_00481638;
    uVar6 = bVar2 & 0xf;
    local_8 = 2;
  }
  uVar7 = 1;
  do {
    if (param_3 <= uVar7) {
      return 0xfffffffe;
    }
    pbVar1 = param_2 + uVar7;
    if ((*pbVar1 & 0xc0) != 0x80) goto LAB_00481638;
    uVar7 = uVar7 + 1;
    uVar6 = uVar6 << 6 | *pbVar1 & 0x3f;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (uVar7 == 2) {
    bVar8 = uVar6 < 0x80;
LAB_004815ad:
    if (bVar8) goto LAB_00481638;
  }
  else if (uVar7 == 3) {
    bVar8 = uVar6 < 0x800;
    goto LAB_004815ad;
  }
  if (0x7ff < uVar6 - 0xd800) {
    *param_1 = (WCHAR)uVar6;
    return uVar7;
  }
LAB_00481638:
  p_Var5 = FUN_0048f66d();
  *(undefined4 *)p_Var5 = 0x2a;
  return 0xffffffff;
}

