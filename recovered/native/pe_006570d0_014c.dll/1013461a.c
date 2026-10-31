/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013461a */

bool FUN_1013461a(char *param_1,uint param_2,undefined2 *param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 local_40;
  char local_3c [32];
  undefined1 local_1c [8];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  puVar4 = (uint *)FUN_10133ec9(param_2);
  uVar11 = *puVar4;
  FUN_1025b2d0(local_1c,param_3,uVar11);
  for (; (cVar1 = *param_1, cVar1 == '\t' || (cVar1 == ' ')); param_1 = param_1 + 1) {
  }
  if (cVar1 == '\0') {
    if (param_5 == 0) goto LAB_101346f5;
    FUN_1025b2d0(param_3,param_5,uVar11);
    uVar11 = *puVar4;
    goto LAB_10134736;
  }
  if ((param_2 & 0xfffffffe) == 8) {
LAB_101346b0:
    pcVar7 = (char *)puVar4[3];
  }
  else {
    pcVar7 = local_3c;
    FUN_10134766(param_4,pcVar7);
    if (local_3c[0] == '\0') goto LAB_101346b0;
  }
  local_40 = 0;
  puVar5 = &local_40;
  if (3 < uVar11) {
    puVar5 = (undefined4 *)param_3;
  }
  iVar6 = FUN_10125a29(param_1,pcVar7,puVar5);
  if (iVar6 < 1) {
LAB_101346f5:
    bVar8 = false;
    goto LAB_10134743;
  }
  if (3 < *puVar4) goto switchD_101346e8_default;
  switch(param_2) {
  case 0:
    uVar10 = 0x7f;
    uVar9 = 0xffffff80;
    break;
  case 1:
    uVar10 = 0xff;
    uVar9 = 0;
    break;
  case 2:
    uVar10 = 0x7fff;
    uVar9 = 0xffff8000;
    goto LAB_1013470c;
  case 3:
    uVar10 = 0xffff;
    uVar9 = 0;
LAB_1013470c:
    uVar3 = FUN_10125d9a(local_40,uVar9,uVar10);
    *param_3 = uVar3;
  default:
    goto switchD_101346e8_default;
  }
  uVar2 = FUN_10125d9a(local_40,uVar9,uVar10);
  *(undefined1 *)param_3 = uVar2;
switchD_101346e8_default:
  uVar11 = *puVar4;
LAB_10134736:
  iVar6 = FUN_102595e0(local_1c,param_3,uVar11);
  bVar8 = iVar6 != 0;
LAB_10134743:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return bVar8;
}

