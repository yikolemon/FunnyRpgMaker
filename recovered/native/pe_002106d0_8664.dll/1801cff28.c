/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cff28 */

int FUN_1801cff28(undefined8 *param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auStack_98 [32];
  char *local_78;
  undefined8 local_70;
  undefined8 local_60;
  char local_55;
  uint local_54;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_98;
  uVar1 = *param_1;
  uVar5 = param_3 & 0xffff;
  if ((int)param_3 < 1) {
    uVar5 = param_3;
  }
  iVar2 = FUN_1801ceb6f(param_2);
  local_78 = &local_55;
  iVar3 = FUN_1801d016e(param_2,uVar5,&local_50,&local_54);
  if (iVar3 == 0) {
    iVar3 = 8;
    if ((*(uint *)(param_2 + 8) < local_50) || (*(uint *)(param_2 + 8) - local_50 < local_54))
    goto LAB_1801cffc0;
    iVar3 = FUN_1801ce63e(param_2,local_50 + iVar2);
    if ((iVar3 == 0) &&
       (uVar4 = FUN_1801cc006(uVar1,local_54,&local_4c), iVar3 = local_4c, local_4c == 0)) {
      local_60 = uVar4;
      iVar3 = FUN_1801ce682(param_2,uVar4,local_54);
      if (iVar3 == 0) {
        local_78 = "t1cid";
        if (local_55 == '\0') {
          local_78 = "type1";
        }
        local_70 = param_4;
        iVar3 = FUN_1801d0305(param_1,local_60,local_54,(int)uVar5 >> 0x1f & uVar5);
      }
      else {
        FUN_1801c9b65(uVar1,local_60);
      }
    }
  }
  if (((char)iVar3 == '\x02') && (iVar2 = FUN_1801ce63e(param_2,iVar2), iVar2 != 0)) {
    iVar3 = iVar2;
  }
LAB_1801cffc0:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_98);
  }
  return iVar3;
}

