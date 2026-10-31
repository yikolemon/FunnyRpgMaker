/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b2f4d */

undefined8
FUN_1400b2f4d(char *param_1,uint param_2,undefined4 *param_3,undefined8 param_4,longlong param_5)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined4 extraout_var;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  char local_68 [32];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  puVar6 = (ulonglong *)FUN_1400b2976(param_2);
  uVar2 = *puVar6;
  FUN_1401c5180(local_48,param_3,uVar2);
  for (; (cVar1 = *param_1, cVar1 == '\t' || (cVar1 == ' ')); param_1 = param_1 + 1) {
  }
  if (cVar1 == '\0') {
    if (param_5 != 0) {
      FUN_1401c5180(param_3,param_5,uVar2);
      goto switchD_1400b3031_default;
    }
LAB_1400b3044:
    uVar7 = 0;
    goto LAB_1400b3097;
  }
  if ((param_2 & 0xfffffffe) == 8) {
LAB_1400b2fef:
    pcVar10 = (char *)puVar6[3];
  }
  else {
    pcVar10 = local_68;
    FUN_1400b30c9(param_4,pcVar10);
    if (local_68[0] == '\0') goto LAB_1400b2fef;
  }
  local_6c = 0;
  puVar8 = &local_6c;
  if (3 < uVar2) {
    puVar8 = param_3;
  }
  iVar5 = FUN_1400a4807(param_1,pcVar10,puVar8);
  if (iVar5 < 1) goto LAB_1400b3044;
  if (3 < *puVar6) goto switchD_1400b3031_default;
  switch(param_2) {
  case 0:
    uVar7 = 0xffffff80;
    uVar9 = 0x7f;
    break;
  case 1:
    uVar7 = 0;
    uVar9 = 0xff;
    break;
  case 2:
    uVar7 = 0xffff8000;
    uVar9 = 0x7fff;
    goto LAB_1400b3065;
  case 3:
    uVar7 = 0;
    uVar9 = 0xffff;
LAB_1400b3065:
    uVar4 = FUN_1400a4c0f(local_6c,uVar7,uVar9);
    *(undefined2 *)param_3 = uVar4;
  default:
    goto switchD_1400b3031_default;
  }
  uVar3 = FUN_1400a4c0f(local_6c,uVar7,uVar9);
  *(undefined1 *)param_3 = uVar3;
switchD_1400b3031_default:
  iVar5 = memcmp(local_48,param_3,*puVar6);
  uVar7 = CONCAT71((int7)(CONCAT44(extraout_var,iVar5) >> 8),iVar5 != 0);
LAB_1400b3097:
  if (DAT_140f17b40 != (local_40 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_40 ^ (ulonglong)auStack_98);
  }
  return uVar7;
}

