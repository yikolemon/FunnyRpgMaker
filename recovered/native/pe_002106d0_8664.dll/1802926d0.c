/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802926d0 */

void FUN_1802926d0(void)

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
  
  puVar4 = (undefined8 *)FUN_1802924ec();
  puVar5 = (undefined8 *)FUN_180292584();
  iVar9 = 0;
  uVar8 = 0;
  local_res8 = 0;
  local_res10 = 0;
  local_res18 = 0;
  iVar1 = FUN_180292554();
  if (((iVar1 == 0) && (iVar1 = FUN_1802924f4(), iVar1 == 0)) &&
     (iVar1 = FUN_180292524(), iVar1 == 0)) {
    FUN_180290e40(DAT_1804213f0);
    DAT_1804213f0 = 0;
    DVar2 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_180421340);
    if (DVar2 != 0xffffffff) {
      local_res8 = DAT_180421340 * 0x3c;
      DAT_180421330 = 1;
      if (DAT_180421386 != 0) {
        local_res8 = DAT_180421394 * 0x3c + local_res8;
      }
      if ((DAT_1804213da != 0) && (DAT_1804213e8 != 0)) {
        iVar9 = (DAT_1804213e8 - DAT_180421394) * 0x3c;
        uVar8 = 1;
      }
      FUN_1802a89a0(*puVar5,0,0x80);
      FUN_1802a89a0(puVar5[1],0,0x80);
      FUN_1802a89a0(*puVar4,0,0x40);
      FUN_1802a89a0(puVar4[1],0,0x40);
      uVar3 = FUN_180272194();
      FUN_180292650(&DAT_180421344,*puVar5,*puVar4,uVar3);
      FUN_180292650(&DAT_180421398,puVar5[1],puVar4[1],uVar3);
      local_res10 = uVar8;
      local_res18 = iVar9;
    }
    piVar6 = (int *)FUN_1802924e4();
    *piVar6 = local_res8;
    puVar7 = (undefined4 *)FUN_1802924d4();
    *puVar7 = local_res10;
    piVar6 = (int *)FUN_1802924dc();
    *piVar6 = local_res18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

