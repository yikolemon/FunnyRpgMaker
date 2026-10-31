/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404afb90 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404afb90(undefined8 *param_1,uint param_2,char *param_3,ulonglong param_4)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_1468 [32];
  undefined8 local_1448;
  uint local_1438 [4];
  char local_1428 [5120];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1404afba8;
  local_28 = ram0x000140613b10 ^ (ulonglong)auStack_1468;
  pcVar7 = param_3 + (param_4 & 0xffffffff);
  uVar2 = *(undefined8 *)
           ((&DAT_1406328d0)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  do {
    if (pcVar7 <= param_3) break;
    pcVar6 = local_1428;
    do {
      if (pcVar7 <= param_3) break;
      cVar1 = *param_3;
      param_3 = param_3 + 1;
      if (cVar1 == '\n') {
        *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        *pcVar6 = '\r';
        pcVar6 = pcVar6 + 1;
      }
      *pcVar6 = cVar1;
      pcVar6 = pcVar6 + 1;
    } while (pcVar6 < local_1428 + 0x13ff);
    local_1438[0] = 0;
    local_1448 = 0;
    uVar5 = (int)pcVar6 - (int)local_1428;
    iVar3 = (*(code *)s_MapViewOfFile_14059e29e._2_8_)(uVar2,local_1428,uVar5,local_1438);
    if (iVar3 == 0) {
      uVar4 = (*_DAT_14059df60)();
      *(undefined4 *)param_1 = uVar4;
      break;
    }
    *(int *)((longlong)param_1 + 4) = *(int *)((longlong)param_1 + 4) + local_1438[0];
  } while (uVar5 <= local_1438[0]);
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_28 ^ (ulonglong)auStack_1468);
}

