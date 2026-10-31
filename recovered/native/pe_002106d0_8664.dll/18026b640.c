/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026b640 */

longlong *
FUN_18026b640(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong param_5,uint *param_6,undefined8 param_7,char *param_8)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
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
  (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar9);
  lVar8 = FUN_18001c0ec(&local_78);
  if ((lVar9 != 0) && (lVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar9), lVar9 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar9,1);
  }
  cVar6 = *param_8;
  while (cVar6 != '\0') {
    if ((char)param_3[1] == '\0') {
      FUN_1800e5e14(param_3);
    }
    if ((char)param_4[1] == '\0') {
      FUN_1800e5e14(param_4);
    }
    lVar9 = *param_3;
    if (lVar9 != 0) {
      if (*param_4 == 0) goto LAB_18026b75d;
LAB_18026b711:
      *param_6 = *param_6 | 2;
      break;
    }
    if (*param_4 == 0) goto LAB_18026b711;
LAB_18026b75d:
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
                (*(code *)PTR__guard_dispatch_icall_18038bc80)
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
LAB_18026b7c4:
        if ((char)param_3[1] == '\0') {
          FUN_1800e5e14(param_3);
        }
        if ((char)param_4[1] == '\0') {
          FUN_1800e5e14(param_4);
        }
        if (*param_3 == 0) {
          if (*param_4 == 0) goto LAB_18026b939;
        }
        else if (*param_4 != 0) goto LAB_18026b939;
        if ((char)param_3[1] == '\0') {
          FUN_1800e5e14(param_3);
        }
        if ((*(byte *)(*(longlong *)(lVar8 + 0x18) + (ulonglong)*(byte *)((longlong)param_3 + 9) * 2
                      ) & 0x48) == 0) goto LAB_18026b939;
        lVar9 = *param_3;
        if (lVar9 == 0) {
LAB_18026b86c:
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
        }
        else {
          if (**(longlong **)(lVar9 + 0x38) == 0) {
LAB_18026b850:
            uVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            iVar1 = **(int **)(lVar9 + 0x50);
            if (iVar1 < 1) goto LAB_18026b850;
            **(int **)(lVar9 + 0x50) = iVar1 + -1;
            pbVar2 = (byte *)**(longlong **)(lVar9 + 0x38);
            **(longlong **)(lVar9 + 0x38) = (longlong)(pbVar2 + 1);
            uVar7 = (uint)*pbVar2;
          }
          if (uVar7 == 0xffffffff) goto LAB_18026b86c;
          *(undefined1 *)(param_3 + 1) = 0;
        }
        goto LAB_18026b7c4;
      }
      if ((char)param_3[1] == '\0') {
        if (lVar9 == 0) {
LAB_18026b8b9:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar9 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar9 + 0x50) < 1)) {
            uVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            uVar7 = (uint)*(byte *)**(undefined8 **)(lVar9 + 0x38);
          }
          if (uVar7 == 0xffffffff) goto LAB_18026b8b9;
          *(char *)((longlong)param_3 + 9) = (char)uVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      cVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                        (lVar8,*(undefined1 *)((longlong)param_3 + 9),0);
      if (cVar6 != *param_8) goto LAB_18026b711;
      lVar9 = *param_3;
      if (lVar9 != 0) {
        if (**(longlong **)(lVar9 + 0x38) == 0) {
LAB_18026b916:
          uVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          iVar1 = **(int **)(lVar9 + 0x50);
          if (iVar1 < 1) goto LAB_18026b916;
          **(int **)(lVar9 + 0x50) = iVar1 + -1;
          pbVar2 = (byte *)**(longlong **)(lVar9 + 0x38);
          **(longlong **)(lVar9 + 0x38) = (longlong)(pbVar2 + 1);
          uVar7 = (uint)*pbVar2;
        }
        if (uVar7 != 0xffffffff) {
          *(undefined1 *)(param_3 + 1) = 0;
          goto LAB_18026b939;
        }
      }
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
LAB_18026b939:
    param_8 = param_8 + 1;
    cVar6 = *param_8;
  }
  if ((char)param_3[1] == '\0') {
    lVar9 = *param_3;
    if (lVar9 == 0) {
LAB_18026b961:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar9 + 0x38) == (byte *)0x0) || (**(int **)(lVar9 + 0x50) < 1)
         ) {
        uVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar7 = (uint)*(byte *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (uVar7 == 0xffffffff) goto LAB_18026b961;
      *(char *)((longlong)param_3 + 9) = (char)uVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar9 = *param_4;
    if (lVar9 != 0) {
      if (((byte *)**(undefined8 **)(lVar9 + 0x38) == (byte *)0x0) || (**(int **)(lVar9 + 0x50) < 1)
         ) {
        uVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar7 = (uint)*(byte *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (uVar7 != 0xffffffff) goto LAB_18026b9ad;
    }
    *param_4 = 0;
  }
LAB_18026b9ad:
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_18026b9c6;
  }
  else if (*param_4 == 0) goto LAB_18026b9c6;
  *param_6 = *param_6 | 1;
LAB_18026b9c6:
  lVar9 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar9;
  return param_2;
}

