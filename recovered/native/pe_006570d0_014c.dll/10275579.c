/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10275579 */

void FUN_10275579(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  DWORD DVar5;
  UINT UVar6;
  int *piVar7;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  puVar2 = (undefined4 *)FUN_1027534a();
  puVar3 = (undefined4 *)FUN_102753d4();
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  iVar4 = FUN_102753a8(&local_8);
  if (iVar4 == 0) {
    iVar4 = FUN_10275350(&local_c);
    if (iVar4 == 0) {
      iVar4 = FUN_1027537c(&local_10);
      if (iVar4 == 0) {
        FUN_10274120(DAT_103a5224);
        DAT_103a5224 = 0;
        DVar5 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_103a5178);
        if (DVar5 != 0xffffffff) {
          local_8 = DAT_103a5178 * 0x3c;
          local_c = 1;
          DAT_103a5170 = 1;
          if (DAT_103a51be != 0) {
            local_8 = DAT_103a51cc * 0x3c + local_8;
          }
          if ((DAT_103a5212 == 0) || (DAT_103a5220 == 0)) {
            local_10 = 0;
            local_c = 0;
          }
          else {
            local_10 = (DAT_103a5220 - DAT_103a51cc) * 0x3c;
          }
          _memset((void *)*puVar3,0,0x80);
          _memset((void *)puVar3[1],0,0x80);
          _memset((void *)*puVar2,0,0x40);
          _memset((void *)puVar2[1],0,0x40);
          UVar6 = ____lc_codepage_func();
          FUN_10275537(&DAT_103a517c,*puVar3,*puVar2,UVar6);
          FUN_10275537(&DAT_103a51d0,puVar3[1],puVar2[1],UVar6);
        }
        iVar4 = local_8;
        piVar7 = (int *)FUN_10275344();
        uVar1 = local_c;
        *piVar7 = iVar4;
        puVar2 = (undefined4 *)FUN_10275338();
        iVar4 = local_10;
        *puVar2 = uVar1;
        piVar7 = (int *)FUN_1027533e();
        *piVar7 = iVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

