/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400230d9 */

int FUN_1400230d9(longlong *param_1,longlong *param_2,longlong param_3,int param_4,uint param_5,
                 undefined8 param_6)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int *piVar7;
  char *pcVar8;
  uint uVar9;
  undefined1 auStackY_88 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  uVar9 = (int)param_5 >> 0x1f ^ param_5;
  iVar4 = 1;
  if ((int)uVar9 < param_4) {
    lVar2 = *param_1;
    uVar1 = *(uint *)(param_3 + (ulonglong)uVar9 * 4);
    uVar5 = FUN_140020a41((longlong)param_2,uVar1);
    iVar4 = (int)uVar5;
    if ((((iVar4 == 0) &&
         (uVar3 = FUN_140020e0f(param_2,&local_4c), iVar4 = local_4c, local_4c == 0)) &&
        (iVar4 = 1, uVar3 != 0)) && (iVar4 = 9, uVar3 < 0x1000000)) {
      uVar6 = FUN_14002232b(param_1,param_2,uVar9,param_6);
      if ((int)uVar6 == 0) {
        iVar4 = 0;
      }
      else {
        uVar5 = FUN_140020a41((longlong)param_2,uVar1 + 4);
        iVar4 = (int)uVar5;
        if ((iVar4 == 0) &&
           (piVar7 = (int *)FUN_14001e961(lVar2,uVar3,&local_4c), iVar4 = local_4c, local_4c == 0))
        {
          iVar4 = FUN_140020a85(param_2,(undefined8 *)piVar7,uVar3);
          if (iVar4 == 0) {
            if (uVar3 < 5) {
              pcVar8 = "truetype";
            }
            else {
              pcVar8 = "truetype";
              if (*piVar7 == 0x4f54544f) {
                pcVar8 = "cff";
              }
            }
            iVar4 = FUN_140022708(param_1,(longlong)piVar7,uVar3,0,pcVar8,param_6);
            if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_88)) {
              return iVar4;
            }
            goto LAB_140023273;
          }
          FUN_14001c53d(lVar2,(longlong)piVar7);
        }
      }
    }
  }
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_88)) {
    return iVar4;
  }
LAB_140023273:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
}

