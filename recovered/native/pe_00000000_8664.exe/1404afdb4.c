/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404afdb4 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404afdb4(undefined8 *param_1,uint param_2,short *param_3,uint param_4)

{
  short sVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  short *psVar8;
  short *psVar9;
  undefined1 auStack_1498 [32];
  undefined1 *local_1478;
  undefined4 local_1470;
  undefined8 local_1468;
  undefined8 local_1460;
  int local_1458 [4];
  short local_1448 [856];
  undefined1 local_d98 [3424];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1404afdd0;
  local_38 = ram0x000140613b10 ^ (ulonglong)auStack_1498;
  uVar2 = *(undefined8 *)
           ((&DAT_1406328d0)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  psVar8 = param_3;
  do {
    if ((short *)((ulonglong)param_4 + (longlong)param_3) <= psVar8) {
LAB_1404afef9:
                    /* WARNING: Subroutine does not return */
      FUN_14044aba0(local_38 ^ (ulonglong)auStack_1498);
    }
    psVar9 = local_1448;
    do {
      if ((short *)((ulonglong)param_4 + (longlong)param_3) <= psVar8) break;
      sVar1 = *psVar8;
      psVar8 = psVar8 + 1;
      if (sVar1 == 10) {
        *psVar9 = 0xd;
        psVar9 = psVar9 + 1;
      }
      *psVar9 = sVar1;
      psVar9 = psVar9 + 1;
    } while (psVar9 < local_1448 + 0x354);
    local_1460 = 0;
    local_1468 = 0;
    local_1470 = 0xd55;
    local_1478 = local_d98;
    uVar3 = FUN_1404a2460(0xfde9,0,local_1448,(longlong)psVar9 - (longlong)local_1448 >> 1);
    if (uVar3 == 0) {
LAB_1404afef1:
      uVar5 = (*_DAT_14059df60)();
      *(undefined4 *)param_1 = uVar5;
      goto LAB_1404afef9;
    }
    uVar7 = 0;
    if (uVar3 != 0) {
      do {
        local_1458[0] = 0;
        local_1478 = (undefined1 *)0x0;
        iVar4 = (*(code *)s_MapViewOfFile_14059e29e._2_8_)
                          (uVar2,local_d98 + uVar7,uVar3 - (int)uVar7,local_1458);
        if (iVar4 == 0) goto LAB_1404afef1;
        uVar6 = (int)uVar7 + local_1458[0];
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < uVar3);
    }
    *(int *)((longlong)param_1 + 4) = (int)psVar8 - (int)param_3;
  } while( true );
}

