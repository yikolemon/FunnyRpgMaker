/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102761c7 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_102761c7(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar4 = param_5;
  if (0 < param_5) {
    iVar1 = FUN_102682c0(param_4,param_5);
    iVar4 = iVar1 + 1;
    if (param_5 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_8 == 0) {
    param_8 = *(int *)(*param_1 + 8);
  }
  uVar2 = 1;
  if (param_9 != 0) {
    uVar2 = 9;
  }
  iVar1 = FUN_102741c1(param_8,uVar2,param_4,iVar4,0,0);
  if (iVar1 == 0) goto LAB_102763a2;
  uVar3 = iVar1 * 2 + 8;
  uVar3 = -(uint)((uint)(iVar1 * 2) < uVar3) & uVar3;
  if (uVar3 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else if (uVar3 < 0x401) {
    puVar7 = (undefined4 *)&stack0xffffffe8;
    puVar6 = (undefined4 *)&stack0xffffffe8;
    if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_10276278:
      puVar6 = puVar7 + 2;
      if (((puVar6 != (undefined4 *)0x0) &&
          (iVar4 = FUN_102741c1(param_8,1,param_4,iVar4,puVar6,iVar1), iVar4 != 0)) &&
         (iVar4 = ___acrt_LCMapStringEx_36(param_2,param_3,puVar6,iVar1,0,0,0,0,0), iVar4 != 0)) {
        if ((param_3 & 0x400) == 0) {
          uVar3 = iVar4 * 2 + 8;
          uVar3 = -(uint)((uint)(iVar4 * 2) < uVar3) & uVar3;
          if (uVar3 == 0) {
            puVar7 = (undefined4 *)0x0;
          }
          else if (uVar3 < 0x401) {
            puVar5 = (undefined4 *)&stack0xffffffe8;
            puVar7 = (undefined4 *)&stack0xffffffe8;
            if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_10276339:
              puVar7 = puVar5 + 2;
              if ((puVar7 != (undefined4 *)0x0) &&
                 (iVar1 = ___acrt_LCMapStringEx_36(param_2,param_3,puVar6,iVar1,puVar7,iVar4,0,0,0),
                 iVar1 != 0)) {
                if (param_7 == 0) {
                  param_7 = 0;
                  param_6 = 0;
                }
                iVar4 = FUN_10274283(param_8,0,puVar7,iVar4,param_6,param_7,0,0);
                if (iVar4 != 0) {
                  FUN_10234d10(puVar7);
                  goto LAB_10276399;
                }
              }
            }
          }
          else {
            puVar5 = (undefined4 *)FUN_10274170(uVar3);
            puVar7 = (undefined4 *)0x0;
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = 0xdddd;
              goto LAB_10276339;
            }
          }
          FUN_10234d10(puVar7);
        }
        else if ((param_7 != 0) && (iVar4 <= param_7)) {
          ___acrt_LCMapStringEx_36(param_2,param_3,puVar6,iVar1,param_6,param_7,0,0,0);
        }
      }
    }
  }
  else {
    puVar7 = (undefined4 *)FUN_10274170(uVar3);
    puVar6 = (undefined4 *)0x0;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = 0xdddd;
      goto LAB_10276278;
    }
  }
LAB_10276399:
  FUN_10234d10(puVar6);
LAB_102763a2:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

