/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404afc98 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404afc98(undefined8 *param_1,uint param_2,short *param_3,ulonglong param_4)

{
  short sVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  short *psVar7;
  undefined1 auStack_1468 [32];
  undefined8 local_1448;
  uint local_1438 [4];
  short local_1428 [2560];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1404afcb0;
  local_28 = ram0x000140613b10 ^ (ulonglong)auStack_1468;
  psVar7 = (short *)((param_4 & 0xffffffff) + (longlong)param_3);
  uVar2 = *(undefined8 *)
           ((&DAT_1406328d0)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  do {
    if (psVar7 <= param_3) break;
    psVar6 = local_1428;
    do {
      if (psVar7 <= param_3) break;
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      if (sVar1 == 10) {
        *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 2;
        *psVar6 = 0xd;
        psVar6 = psVar6 + 1;
      }
      *psVar6 = sVar1;
      psVar6 = psVar6 + 1;
    } while (psVar6 < local_1428 + 0x9ff);
    local_1438[0] = 0;
    local_1448 = 0;
    uVar3 = (int)((longlong)psVar6 - (longlong)local_1428 >> 1) * 2;
    iVar4 = (*(code *)s_MapViewOfFile_14059e29e._2_8_)(uVar2,local_1428,uVar3,local_1438);
    if (iVar4 == 0) {
      uVar5 = (*_DAT_14059df60)();
      *(undefined4 *)param_1 = uVar5;
      break;
    }
    *(int *)((longlong)param_1 + 4) = *(int *)((longlong)param_1 + 4) + local_1438[0];
  } while (uVar3 <= local_1438[0]);
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_28 ^ (ulonglong)auStack_1468);
}

