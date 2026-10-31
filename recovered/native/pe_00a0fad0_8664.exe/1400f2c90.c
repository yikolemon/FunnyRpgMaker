/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400f2c90 */

longlong *
FUN_1400f2c90(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong param_5,uint *param_6,undefined8 param_7,char *param_8)

{
  int iVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  short sVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined4 local_78;
  undefined4 uStack_74;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [24];
  
  lVar9 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  lStack_70 = lVar9;
  (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar9);
  uVar8 = FUN_1400e9630(&local_78);
  if ((lVar9 != 0) && (lVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar9), lVar9 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar9,1);
  }
  cVar6 = *param_8;
  while (cVar6 != '\0') {
    if ((char)param_3[1] == '\0') {
      FUN_1400e3870(param_3);
    }
    if ((char)param_4[1] == '\0') {
      FUN_1400e3870(param_4);
    }
    lVar9 = *param_3;
    if (lVar9 != 0) {
      if (*param_4 == 0) goto LAB_1400f2da0;
LAB_1400f2d5c:
      *param_6 = *param_6 | 2;
      break;
    }
    if (*param_4 == 0) goto LAB_1400f2d5c;
LAB_1400f2da0:
    if (*param_8 == '%') {
      param_8 = param_8 + 1;
      local_78 = (undefined4)*param_4;
      uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
      lStack_70 = param_4[1];
      local_68 = (undefined4)*param_3;
      uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_60 = (undefined4)param_3[1];
      uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar10 = (undefined4 *)
                (*(code *)PTR__guard_dispatch_icall_140178c20)
                          (param_1,local_58,&local_68,&local_78,param_5,param_6,param_7,*param_8,0);
      uVar3 = puVar10[1];
      uVar4 = puVar10[2];
      uVar5 = puVar10[3];
      *(undefined4 *)param_3 = *puVar10;
      *(undefined4 *)((longlong)param_3 + 4) = uVar3;
      *(undefined4 *)(param_3 + 1) = uVar4;
      *(undefined4 *)((longlong)param_3 + 0xc) = uVar5;
    }
    else {
      if (*param_8 == ' ') {
LAB_1400f2e10:
        if ((char)param_3[1] == '\0') {
          FUN_1400e3870(param_3);
        }
        if ((char)param_4[1] == '\0') {
          FUN_1400e3870(param_4);
        }
        if (*param_3 == 0) {
          if (*param_4 == 0) goto LAB_1400f2fa5;
        }
        else if (*param_4 != 0) goto LAB_1400f2fa5;
        if ((char)param_3[1] == '\0') {
          FUN_1400e3870(param_3);
        }
        cVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar8,0x48);
        if (cVar6 == '\0') goto LAB_1400f2fa5;
        lVar9 = *param_3;
        if (lVar9 == 0) {
LAB_1400f2ecd:
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
        }
        else {
          if (**(longlong **)(lVar9 + 0x38) == 0) {
LAB_1400f2eac:
            sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            iVar1 = **(int **)(lVar9 + 0x50);
            if (iVar1 < 1) goto LAB_1400f2eac;
            **(int **)(lVar9 + 0x50) = iVar1 + -1;
            psVar2 = (short *)**(longlong **)(lVar9 + 0x38);
            **(longlong **)(lVar9 + 0x38) = (longlong)(psVar2 + 1);
            sVar7 = *psVar2;
          }
          if (sVar7 == -1) goto LAB_1400f2ecd;
          *(undefined1 *)(param_3 + 1) = 0;
        }
        goto LAB_1400f2e10;
      }
      if ((char)param_3[1] == '\0') {
        if (lVar9 == 0) {
LAB_1400f2f20:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar9 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar9 + 0x50) < 1)) {
            sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar7 = *(short *)**(undefined8 **)(lVar9 + 0x38);
          }
          if (sVar7 == -1) goto LAB_1400f2f20;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      cVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)
                        (uVar8,*(undefined2 *)((longlong)param_3 + 10),0);
      if (cVar6 != *param_8) goto LAB_1400f2d5c;
      lVar9 = *param_3;
      if (lVar9 != 0) {
        if (**(longlong **)(lVar9 + 0x38) == 0) {
LAB_1400f2f7d:
          sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          iVar1 = **(int **)(lVar9 + 0x50);
          if (iVar1 < 1) goto LAB_1400f2f7d;
          **(int **)(lVar9 + 0x50) = iVar1 + -1;
          psVar2 = (short *)**(longlong **)(lVar9 + 0x38);
          **(longlong **)(lVar9 + 0x38) = (longlong)(psVar2 + 1);
          sVar7 = *psVar2;
        }
        if (sVar7 != -1) {
          *(undefined1 *)(param_3 + 1) = 0;
          goto LAB_1400f2fa5;
        }
      }
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
LAB_1400f2fa5:
    param_8 = param_8 + 1;
    cVar6 = *param_8;
  }
  if ((char)param_3[1] == '\0') {
    lVar9 = *param_3;
    if (lVar9 == 0) {
LAB_1400f2fd3:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar9 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar9 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (sVar7 == -1) goto LAB_1400f2fd3;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar9 = *param_4;
    if (lVar9 != 0) {
      if (((short *)**(undefined8 **)(lVar9 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar9 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (sVar7 != -1) goto LAB_1400f3024;
    }
    *param_4 = 0;
  }
LAB_1400f3024:
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_1400f303d;
  }
  else if (*param_4 == 0) goto LAB_1400f303d;
  *param_6 = *param_6 | 1;
LAB_1400f303d:
  lVar9 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar9;
  return param_2;
}

