/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140122a00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140122a00(void)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int local_res8;
  undefined4 local_res10;
  int local_res18;
  
  puVar4 = (undefined8 *)FUN_14012284c();
  puVar5 = (undefined8 *)FUN_1401228e4();
  iVar9 = 0;
  uVar8 = 0;
  local_res8 = 0;
  local_res10 = 0;
  local_res18 = 0;
  iVar1 = FUN_1401228b4();
  if (((iVar1 == 0) && (iVar1 = FUN_140122854(), iVar1 == 0)) &&
     (iVar1 = FUN_140122884(), iVar1 == 0)) {
    FUN_1401212e0(DAT_1403551d0);
    DAT_1403551d0 = 0;
    DVar2 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_140355120);
    if (DVar2 != 0xffffffff) {
      local_res8 = DAT_140355120 * 0x3c;
      _DAT_140355110 = 1;
      if (DAT_140355166 != 0) {
        local_res8 = DAT_140355174 * 0x3c + local_res8;
      }
      if ((DAT_1403551ba != 0) && (DAT_1403551c8 != 0)) {
        iVar9 = (DAT_1403551c8 - DAT_140355174) * 0x3c;
        uVar8 = 1;
      }
      FUN_1401366a0(*puVar5,0,0x80);
      FUN_1401366a0(puVar5[1],0,0x80);
      FUN_1401366a0(*puVar4,0,0x40);
      FUN_1401366a0(puVar4[1],0,0x40);
      uVar3 = FUN_14010b0f8();
      FUN_140122980(&DAT_140355124,*puVar5,*puVar4,uVar3);
      FUN_140122980(&DAT_140355178,puVar5[1],puVar4[1],uVar3);
      local_res10 = uVar8;
      local_res18 = iVar9;
    }
    piVar6 = (int *)FUN_140122844();
    *piVar6 = local_res8;
    puVar7 = (undefined4 *)FUN_140122834();
    *puVar7 = local_res10;
    piVar6 = (int *)FUN_14012283c();
    *piVar6 = local_res18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

