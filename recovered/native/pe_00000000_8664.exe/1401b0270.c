/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b0270 */

void FUN_1401b0270(void)

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
  
  puVar4 = (undefined8 *)FUN_1401b008c();
  puVar5 = (undefined8 *)FUN_1401b0124();
  iVar9 = 0;
  uVar8 = 0;
  local_res8 = 0;
  local_res10 = 0;
  local_res18 = 0;
  iVar1 = FUN_1401b00f4();
  if (((iVar1 == 0) && (iVar1 = FUN_1401b0094(), iVar1 == 0)) &&
     (iVar1 = FUN_1401b00c4(), iVar1 == 0)) {
    FUN_1401aea30(DAT_140f32da0);
    DAT_140f32da0 = 0;
    DVar2 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_140f32cf0);
    if (DVar2 != 0xffffffff) {
      local_res8 = DAT_140f32cf0 * 0x3c;
      DAT_140f32ce0 = 1;
      if (DAT_140f32d36 != 0) {
        local_res8 = DAT_140f32d44 * 0x3c + local_res8;
      }
      if ((DAT_140f32d8a != 0) && (DAT_140f32d98 != 0)) {
        iVar9 = (DAT_140f32d98 - DAT_140f32d44) * 0x3c;
        uVar8 = 1;
      }
      FUN_1401c5830(*puVar5,0,0x80);
      FUN_1401c5830(puVar5[1],0,0x80);
      FUN_1401c5830(*puVar4,0,0x40);
      FUN_1401c5830(puVar4[1],0,0x40);
      uVar3 = FUN_140192f20();
      FUN_1401b01f0(&DAT_140f32cf4,*puVar5,*puVar4,uVar3);
      FUN_1401b01f0(&DAT_140f32d48,puVar5[1],puVar4[1],uVar3);
      local_res10 = uVar8;
      local_res18 = iVar9;
    }
    piVar6 = (int *)FUN_1401b0084();
    *piVar6 = local_res8;
    puVar7 = (undefined4 *)FUN_1401b0074();
    *puVar7 = local_res10;
    piVar6 = (int *)FUN_1401b007c();
    *piVar6 = local_res18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

