/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002232b */

ulonglong FUN_14002232b(longlong *param_1,longlong *param_2,uint param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  uint uVar9;
  undefined1 auStackY_98 [32];
  char local_55;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  lVar1 = *param_1;
  uVar9 = param_3 & 0xffff;
  if ((int)param_3 < 1) {
    uVar9 = param_3;
  }
  uVar2 = FUN_140020f72((longlong)param_2);
  uVar4 = FUN_140022571(param_2,uVar9,&local_50,&local_54,&local_55);
  uVar3 = (uint)uVar4;
  if (uVar3 == 0) {
    uVar4 = 8;
    if ((*(uint *)(param_2 + 1) < local_50) || (*(uint *)(param_2 + 1) - local_50 < local_54))
    goto LAB_1400223c3;
    uVar6 = FUN_140020a41((longlong)param_2,local_50 + uVar2);
    uVar3 = (uint)uVar6;
    if (uVar3 != 0) goto LAB_14002238d;
    puVar7 = (undefined8 *)FUN_14001e961(lVar1,local_54,(int *)&local_4c);
    uVar4 = (ulonglong)local_4c;
    if (local_4c == 0) {
      uVar3 = FUN_140020a85(param_2,puVar7,local_54);
      if (uVar3 == 0) {
        pcVar8 = "t1cid";
        if (local_55 == '\0') {
          pcVar8 = "type1";
        }
        uVar3 = FUN_140022708(param_1,(longlong)puVar7,local_54,(int)uVar9 >> 0x1f & uVar9,pcVar8,
                              param_4);
        goto LAB_14002238d;
      }
      uVar4 = (ulonglong)uVar3;
      FUN_14001c53d(lVar1,(longlong)puVar7);
    }
  }
  else {
LAB_14002238d:
    uVar4 = (ulonglong)uVar3;
  }
  if (((char)uVar4 == '\x02') && (uVar5 = FUN_140020a41((longlong)param_2,uVar2), (int)uVar5 != 0))
  {
    uVar4 = uVar5 & 0xffffffff;
  }
LAB_1400223c3:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_98);
  }
  return uVar4;
}

