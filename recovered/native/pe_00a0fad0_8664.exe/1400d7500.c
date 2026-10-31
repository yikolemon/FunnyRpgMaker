/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d7500 */

/* WARNING: Removing unreachable block (ram,0x0001400d832e) */

void FUN_1400d7500(undefined1 *param_1,int param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  char ******ppppppcVar16;
  char ******ppppppcVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 uVar22;
  longlong lVar23;
  char ******ppppppcVar24;
  char cVar25;
  char *pcVar26;
  int iVar27;
  char *pcVar28;
  undefined1 auStack_108 [48];
  char local_d8;
  char local_d7;
  char local_d6;
  byte local_d5;
  char local_d4;
  char local_d3;
  char *local_d0;
  char local_c8;
  int local_c4;
  longlong local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  char *****local_a8 [3];
  ulonglong local_90;
  char *****local_88 [2];
  longlong local_78;
  ulonglong local_70;
  byte local_68 [14];
  byte abStack_5a [14];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_108;
  local_c4 = param_2;
  uVar12 = FUN_14000b3ff(param_5);
  (*(code *)PTR__guard_dispatch_icall_140178c20)
            (uVar12,"0123456789ABCDEFabcdef-+XxPp",&DAT_14014303d,local_68);
  local_d4 = abStack_5a[9];
  local_d3 = abStack_5a[8];
  local_d5 = local_68[0];
  uVar12 = FUN_14002469f(param_5);
  local_b0 = uVar12;
  (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar12,local_88);
  if (local_78 == 0) {
    cVar8 = '\0';
  }
  else {
    cVar8 = (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar12);
    cVar25 = '\0';
    local_d8 = 0;
    if (local_78 != 0) {
      lVar14 = *param_3;
LAB_1400d7614:
      if ((char)param_3[1] == '\0') {
        if (lVar14 == 0) {
LAB_1400d7650:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar14 + 0x50) < 1)) {
            uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
          }
          if (uVar11 == 0xffffffff) goto LAB_1400d7650;
          *(char *)((longlong)param_3 + 9) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar14 = *param_4;
        if (lVar14 == 0) {
LAB_1400d7698:
          *param_4 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar14 + 0x50) < 1)) {
            uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
          }
          if (uVar11 == 0xffffffff) goto LAB_1400d7698;
          *(char *)((longlong)param_4 + 9) = (char)uVar11;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar14 = *param_3;
      if (lVar14 == 0) {
        if (*param_4 == 0) goto LAB_1400d75b1;
      }
      else if (*param_4 != 0) goto LAB_1400d75b1;
      if ((char)param_3[1] == '\0') {
        if (lVar14 == 0) {
LAB_1400d76fb:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar14 + 0x50) < 1)) {
            uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
          }
          if (uVar11 == 0xffffffff) goto LAB_1400d76fb;
          *(char *)((longlong)param_3 + 9) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(char *)((longlong)param_3 + 9) != cVar8) goto LAB_1400d75b1;
      lVar14 = *param_3;
      if (lVar14 == 0) {
LAB_1400d775d:
        *param_3 = 0;
        lVar14 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
        cVar25 = '\x01';
      }
      else {
        if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_1400d773b:
          uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          iVar27 = **(int **)(lVar14 + 0x50);
          if (iVar27 < 1) goto LAB_1400d773b;
          **(int **)(lVar14 + 0x50) = iVar27 + -1;
          pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
          **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
          uVar11 = (uint)*pbVar4;
        }
        if (uVar11 == 0xffffffff) goto LAB_1400d775d;
        lVar14 = *param_3;
        *(undefined1 *)(param_3 + 1) = 0;
        cVar25 = '\x01';
      }
      goto LAB_1400d7614;
    }
  }
  local_d8 = '\0';
  cVar25 = local_d8;
LAB_1400d75b1:
  local_d8 = cVar25;
  if ((char)param_3[1] == '\0') {
    lVar14 = *param_3;
    if (lVar14 == 0) {
LAB_1400d778d:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d778d;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar14 = *param_4;
    if (lVar14 == 0) {
LAB_1400d77d5:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d77d5;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar14 = *param_3;
  if (lVar14 == 0) {
    if (*param_4 != 0) {
LAB_1400d77fc:
      if ((char)param_3[1] == '\0') {
        if (lVar14 == 0) {
LAB_1400d7838:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar14 + 0x50) < 1)) {
            uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
          }
          if (uVar11 == 0xffffffff) goto LAB_1400d7838;
          *(char *)((longlong)param_3 + 9) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(char *)((longlong)param_3 + 9) == local_d4) {
        *param_1 = 0x2b;
        param_1 = param_1 + 1;
        lVar14 = *param_3;
        if (lVar14 != 0) {
          if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_1400d7882:
            uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            iVar27 = **(int **)(lVar14 + 0x50);
            if (iVar27 < 1) goto LAB_1400d7882;
            **(int **)(lVar14 + 0x50) = iVar27 + -1;
            pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
            **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
            uVar11 = (uint)*pbVar4;
          }
          if (uVar11 != 0xffffffff) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_1400d7903;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (*(char *)((longlong)param_3 + 9) != local_d3) goto LAB_1400d7903;
        *param_1 = 0x2d;
        param_1 = param_1 + 1;
        lVar14 = *param_3;
        if (lVar14 != 0) {
          if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_1400d78e4:
            uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            iVar27 = **(int **)(lVar14 + 0x50);
            if (iVar27 < 1) goto LAB_1400d78e4;
            **(int **)(lVar14 + 0x50) = iVar27 + -1;
            pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
            **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
            uVar11 = (uint)*pbVar4;
          }
          if (uVar11 != 0xffffffff) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_1400d7903;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
    }
  }
  else if (*param_4 == 0) goto LAB_1400d77fc;
LAB_1400d7903:
  *param_1 = 0x30;
  pcVar28 = param_1 + 1;
  local_d6 = '\0';
  uVar22 = 0;
  local_d7 = '\0';
  local_d0 = pcVar28;
  if ((char)param_3[1] == '\0') {
    lVar14 = *param_3;
    if (lVar14 == 0) {
LAB_1400d7958:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d7958;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar14 = *param_4;
    if (lVar14 == 0) {
LAB_1400d79a3:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d79a3;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar14 = *param_3;
  if (lVar14 == 0) {
    if (*param_4 == 0) goto LAB_1400d7bf2;
  }
  else if (*param_4 != 0) goto LAB_1400d7bf2;
  if ((char)param_3[1] == '\0') {
    if (lVar14 == 0) {
LAB_1400d7a0a:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d7a0a;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(byte *)((longlong)param_3 + 9) != local_d5) goto LAB_1400d7bf2;
  lVar14 = *param_3;
  if (lVar14 == 0) {
LAB_1400d7aa4:
    *param_3 = 0;
  }
  else {
    if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_1400d7a55:
      uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar27 = **(int **)(lVar14 + 0x50);
      if (iVar27 < 1) goto LAB_1400d7a55;
      **(int **)(lVar14 + 0x50) = iVar27 + -1;
      pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
      **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
      uVar11 = (uint)*pbVar4;
    }
    if (uVar11 == 0xffffffff) goto LAB_1400d7aa4;
    *(undefined1 *)(param_3 + 1) = 0;
    lVar14 = *param_3;
    if (lVar14 == 0) goto LAB_1400d7aa4;
    if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) || (**(int **)(lVar14 + 0x50) < 1)
       ) {
      uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
    }
    if (uVar11 == 0xffffffff) goto LAB_1400d7aa4;
    *(char *)((longlong)param_3 + 9) = (char)uVar11;
  }
  *(undefined1 *)(param_3 + 1) = 1;
  if ((char)param_4[1] == '\0') {
    lVar14 = *param_4;
    if (lVar14 == 0) {
LAB_1400d7aef:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d7aef;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar14 = *param_3;
  if (lVar14 == 0) {
    if (*param_4 != 0) {
LAB_1400d7b0b:
      cVar25 = (char)param_3[1];
      if (cVar25 == '\0') {
        if (lVar14 == 0) {
LAB_1400d7b62:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar14 + 0x50) < 1)) {
            uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
          }
          if (uVar11 == 0xffffffff) goto LAB_1400d7b62;
          *(char *)((longlong)param_3 + 9) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
        cVar25 = '\x01';
      }
      if (*(byte *)((longlong)param_3 + 9) != abStack_5a[0xb]) {
        if (cVar25 == '\0') {
          lVar14 = *param_3;
          if (lVar14 != 0) {
            if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar14 + 0x50) < 1)) {
              uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
            }
            else {
              uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
            }
            if (uVar11 != 0xffffffff) {
              *(char *)((longlong)param_3 + 9) = (char)uVar11;
              *(undefined1 *)(param_3 + 1) = 1;
              goto LAB_1400d7bcd;
            }
          }
          *param_3 = 0;
          uVar11 = (uint)*(byte *)((longlong)param_3 + 9);
          *(undefined1 *)(param_3 + 1) = 1;
        }
        else {
          uVar11 = (uint)*(byte *)((longlong)param_3 + 9);
        }
LAB_1400d7bcd:
        if ((char)uVar11 != abStack_5a[10]) {
          uVar22 = 1;
          local_d7 = '\x01';
          goto LAB_1400d7bf2;
        }
      }
      local_d6 = '\x01';
      FUN_1400d6470(param_3);
      *pcVar28 = 'x';
      local_d0 = param_1 + 2;
LAB_1400d7bf2:
      bVar5 = false;
      iVar27 = 0;
      local_c0 = 0;
      uVar13 = 10;
      if (local_d6 != '\0') {
        uVar13 = 0x16;
      }
      local_b8 = uVar13;
      if (local_78 != 0) {
LAB_1400d7de0:
        if ((char)param_3[1] == '\0') {
          lVar14 = *param_3;
          if (lVar14 == 0) {
LAB_1400d7e1f:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar14 + 0x50) < 1)) {
              uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
            }
            else {
              uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
            }
            if (uVar11 == 0xffffffff) goto LAB_1400d7e1f;
            *(char *)((longlong)param_3 + 9) = (char)uVar11;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((char)param_4[1] == '\0') {
          lVar14 = *param_4;
          if (lVar14 == 0) {
LAB_1400d7e66:
            *param_4 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar14 + 0x50) < 1)) {
              uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
            }
            else {
              uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
            }
            if (uVar11 == 0xffffffff) goto LAB_1400d7e66;
            *(char *)((longlong)param_4 + 9) = (char)uVar11;
          }
          *(undefined1 *)(param_4 + 1) = 1;
        }
        lVar14 = *param_3;
        if (lVar14 == 0) {
          if (*param_4 == 0) goto LAB_1400d7e7e;
        }
        else if (*param_4 != 0) goto LAB_1400d7e7e;
        if ((char)param_3[1] == '\0') {
          if (lVar14 == 0) {
LAB_1400d7f1c:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar14 + 0x50) < 1)) {
              uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
            }
            else {
              uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
            }
            if (uVar11 == 0xffffffff) goto LAB_1400d7f1c;
            *(char *)((longlong)param_3 + 9) = (char)uVar11;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*(char *)((longlong)param_3 + 9) != cVar8) goto LAB_1400d7e7e;
        lVar14 = *param_3;
        if (lVar14 == 0) {
LAB_1400d7f80:
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
          local_d8 = '\x01';
        }
        else {
          if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_1400d7f5f:
            uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            iVar3 = **(int **)(lVar14 + 0x50);
            if (iVar3 < 1) goto LAB_1400d7f5f;
            **(int **)(lVar14 + 0x50) = iVar3 + -1;
            pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
            **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
            uVar11 = (uint)*pbVar4;
          }
          if (uVar11 == 0xffffffff) goto LAB_1400d7f80;
          *(undefined1 *)(param_3 + 1) = 0;
          local_d8 = '\x01';
        }
        goto LAB_1400d7de0;
      }
LAB_1400d7c20:
      if ((char)param_3[1] == '\0') {
        lVar14 = *param_3;
        if (lVar14 == 0) {
LAB_1400d7c5f:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar14 + 0x50) < 1)) {
            uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
          }
          if (uVar11 == 0xffffffff) goto LAB_1400d7c5f;
          *(char *)((longlong)param_3 + 9) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar14 = *param_4;
        if (lVar14 == 0) {
LAB_1400d7cab:
          *param_4 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar14 + 0x50) < 1)) {
            uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
          }
          if (uVar11 == 0xffffffff) goto LAB_1400d7cab;
          *(char *)((longlong)param_4 + 9) = (char)uVar11;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar14 = *param_3;
      if (lVar14 == 0) {
        if (*param_4 == 0) goto LAB_1400d83fb;
      }
      else if (*param_4 != 0) goto LAB_1400d83fb;
      if ((char)param_3[1] == '\0') {
        if (lVar14 == 0) {
LAB_1400d7d12:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar14 + 0x50) < 1)) {
            uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
          }
          if (uVar11 == 0xffffffff) goto LAB_1400d7d12;
          *(char *)((longlong)param_3 + 9) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar14 = thunk_FUN_1400daaa0(local_68,local_4c,*(undefined1 *)((longlong)param_3 + 9));
      uVar15 = lVar14 - (longlong)local_68;
      if (uVar13 <= uVar15) goto LAB_1400d83fb;
      if (iVar27 < local_c4) {
        if ((uVar15 != 0) || (iVar27 != 0)) {
          *local_d0 = "0123456789ABCDEFabcdef-+XxPp"[uVar15];
          local_d0 = local_d0 + 1;
          iVar27 = iVar27 + 1;
        }
      }
      else {
        local_c0 = local_c0 + 1;
        if (uVar15 != 0) {
          bVar5 = true;
        }
      }
      local_d7 = '\x01';
      lVar14 = *param_3;
      if (lVar14 == 0) {
LAB_1400d7dca:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_1400d7daf:
          uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          iVar3 = **(int **)(lVar14 + 0x50);
          if (iVar3 < 1) goto LAB_1400d7daf;
          **(int **)(lVar14 + 0x50) = iVar3 + -1;
          pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
          **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
          uVar11 = (uint)*pbVar4;
        }
        if (uVar11 == 0xffffffff) goto LAB_1400d7dca;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_1400d7c20;
    }
  }
  else if (*param_4 == 0) goto LAB_1400d7b0b;
  *pcVar28 = '\0';
LAB_1400d9108:
  FUN_1400065bc(local_88);
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_48 ^ (ulonglong)auStack_108);
LAB_1400d7e7e:
  FUN_14002213a(local_a8,1,uVar22);
  uVar13 = local_b8;
  lVar14 = 0;
LAB_1400d7ea0:
  if ((char)param_3[1] == '\0') {
    lVar19 = *param_3;
    if (lVar19 == 0) {
LAB_1400d7fa8:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar19 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d7fa8;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar19 = *param_4;
    if (lVar19 == 0) {
LAB_1400d7ff4:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar19 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d7ff4;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar19 = *param_3;
  if (lVar19 == 0) {
    if (*param_4 == 0) goto LAB_1400d8010;
  }
  else if (*param_4 != 0) goto LAB_1400d8010;
  if ((char)param_3[1] == '\0') {
    if (lVar19 == 0) {
LAB_1400d807e:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar19 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d807e;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar19 = thunk_FUN_1400daaa0(local_68,local_4c,*(undefined1 *)((longlong)param_3 + 9));
  uVar15 = lVar19 - (longlong)local_68;
  if (uVar15 < uVar13) {
    local_d7 = '\x01';
    if (iVar27 < local_c4) {
      if ((uVar15 != 0) || (iVar27 != 0)) {
        *local_d0 = "0123456789ABCDEFabcdef-+XxPp"[uVar15];
        local_d0 = local_d0 + 1;
        iVar27 = iVar27 + 1;
      }
    }
    else {
      local_c0 = local_c0 + 1;
      if (uVar15 != 0) {
        bVar5 = true;
      }
    }
    ppppppcVar16 = local_a8;
    if (0xf < local_90) {
      ppppppcVar16 = (char ******)local_a8[0];
    }
    if (*(char *)((longlong)ppppppcVar16 + lVar14) != '\x7f') {
      ppppppcVar16 = local_a8;
      if (0xf < local_90) {
        ppppppcVar16 = (char ******)local_a8[0];
      }
      *(char *)((longlong)ppppppcVar16 + lVar14) =
           *(char *)((longlong)ppppppcVar16 + lVar14) + '\x01';
    }
  }
  else {
    if ((char)param_3[1] == '\0') {
      lVar19 = *param_3;
      if (lVar19 == 0) {
LAB_1400d8152:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar11 == 0xffffffff) goto LAB_1400d8152;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(char *)((longlong)param_3 + 9) != cVar8) goto LAB_1400d8010;
    ppppppcVar16 = local_a8;
    if (0xf < local_90) {
      ppppppcVar16 = (char ******)local_a8[0];
    }
    if (*(char *)((longlong)ppppppcVar16 + lVar14) == '\0') {
      local_d8 = '\x01';
    }
    else {
      FUN_14000cf50(local_a8);
      lVar14 = lVar14 + 1;
    }
  }
  lVar19 = *param_3;
  if (lVar19 == 0) {
LAB_1400d81de:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar19 + 0x38) == 0) {
LAB_1400d81c3:
      uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar3 = **(int **)(lVar19 + 0x50);
      if (iVar3 < 1) goto LAB_1400d81c3;
      **(int **)(lVar19 + 0x50) = iVar3 + -1;
      pbVar4 = (byte *)**(longlong **)(lVar19 + 0x38);
      **(longlong **)(lVar19 + 0x38) = (longlong)(pbVar4 + 1);
      uVar11 = (uint)*pbVar4;
    }
    if (uVar11 == 0xffffffff) goto LAB_1400d81de;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1400d7ea0;
LAB_1400d8010:
  uVar12 = local_b0;
  if (lVar14 != 0) {
    ppppppcVar16 = local_a8;
    if (0xf < local_90) {
      ppppppcVar16 = (char ******)local_a8[0];
    }
    if (*(char *)((longlong)ppppppcVar16 + lVar14) < '\x01') goto LAB_1400d81ee;
    lVar14 = lVar14 + 1;
  }
  do {
    if ((char)param_3[1] == '\0') {
      lVar19 = *param_3;
      if (lVar19 == 0) {
LAB_1400d8232:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar11 == 0xffffffff) goto LAB_1400d8232;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar19 = *param_4;
      if (lVar19 == 0) {
LAB_1400d827e:
        *param_4 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar11 == 0xffffffff) goto LAB_1400d827e;
        *(char *)((longlong)param_4 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar19 = *param_3;
    if (lVar19 == 0) {
      if (*param_4 == 0) break;
    }
    else if (*param_4 != 0) break;
    if ((char)param_3[1] == '\0') {
      if (lVar19 == 0) {
LAB_1400d8378:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar11 == 0xffffffff) goto LAB_1400d8378;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(char *)((longlong)param_3 + 9) != cVar8) break;
    lVar19 = *param_3;
    if (lVar19 == 0) {
LAB_1400d83dc:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar19 + 0x38) == 0) {
LAB_1400d83c0:
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        iVar3 = **(int **)(lVar19 + 0x50);
        if (iVar3 < 1) goto LAB_1400d83c0;
        **(int **)(lVar19 + 0x50) = iVar3 + -1;
        pbVar4 = (byte *)**(longlong **)(lVar19 + 0x38);
        **(longlong **)(lVar19 + 0x38) = (longlong)(pbVar4 + 1);
        uVar11 = (uint)*pbVar4;
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d83dc;
      *(undefined1 *)(param_3 + 1) = 0;
    }
LAB_1400d81ee:
    local_d8 = '\x01';
  } while( true );
  ppppppcVar16 = local_88;
  if (0xf < local_70) {
    ppppppcVar16 = (char ******)local_88[0];
  }
  ppppppcVar24 = (char ******)((longlong)ppppppcVar16 + local_78);
  cVar25 = '\0';
  if (local_d8 == '\0') {
LAB_1400d82d0:
    do {
      do {
        if (lVar14 == 0) goto LAB_1400d83f2;
        if (ppppppcVar16 != ppppppcVar24) {
          cVar25 = *(char *)ppppppcVar16;
          ppppppcVar16 = (char ******)((longlong)ppppppcVar16 + 1);
        }
        lVar14 = lVar14 + -1;
      } while (0x7d < (byte)(cVar25 - 1U));
      if (lVar14 != 0) {
        ppppppcVar17 = local_a8;
        if (0xf < local_90) {
          ppppppcVar17 = (char ******)local_a8[0];
        }
        if (*(char *)((longlong)ppppppcVar17 + lVar14) != cVar25) break;
        if (lVar14 != 0) goto LAB_1400d82d0;
      }
      ppppppcVar17 = local_a8;
      if (0xf < local_90) {
        ppppppcVar17 = (char ******)local_a8[0];
      }
    } while (*(char *)ppppppcVar17 <= cVar25);
    local_d8 = '\x01';
  }
LAB_1400d83f2:
  FUN_1400065bc(local_a8);
LAB_1400d83fb:
  if (((local_d6 != '\0') && (local_d7 != '\0')) && (iVar27 == 0)) {
    *local_d0 = '0';
    local_d0 = local_d0 + 1;
  }
  puVar18 = (undefined8 *)FUN_1401174fc();
  cVar25 = *(char *)*puVar18;
  local_c8 = cVar25;
  if ((char)param_3[1] == '\0') {
    lVar14 = *param_3;
    if (lVar14 == 0) {
LAB_1400d8468:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d8468;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar14 = *param_4;
    if (lVar14 == 0) {
LAB_1400d84b4:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d84b4;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar14 = *param_3;
  pcVar28 = local_d0;
  if (lVar14 == 0) {
    if (*param_4 == 0) goto LAB_1400d84d6;
  }
  else if (*param_4 != 0) goto LAB_1400d84d6;
  if ((char)param_3[1] == '\0') {
    if (lVar14 == 0) {
LAB_1400d856c:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d856c;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  cVar8 = *(char *)((longlong)param_3 + 9);
  cVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar12);
  pcVar28 = local_d0;
  if (cVar8 != cVar9) goto LAB_1400d84d6;
  *local_d0 = cVar25;
  pcVar28 = local_d0 + 1;
  lVar14 = *param_3;
  local_d0 = pcVar28;
  if (lVar14 != 0) {
    if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_1400d85d7:
      uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar3 = **(int **)(lVar14 + 0x50);
      if (iVar3 < 1) goto LAB_1400d85d7;
      **(int **)(lVar14 + 0x50) = iVar3 + -1;
      pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
      **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
      uVar11 = (uint)*pbVar4;
    }
    if (uVar11 != 0xffffffff) {
      *(undefined1 *)(param_3 + 1) = 0;
      goto LAB_1400d84d6;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
LAB_1400d84d6:
  bVar1 = local_d5;
  lVar14 = local_c0;
  cVar25 = local_d7;
  uVar13 = local_b8;
  if (iVar27 == 0) {
LAB_1400d84f0:
    if ((char)param_3[1] == '\0') {
      lVar19 = *param_3;
      if (lVar19 == 0) {
LAB_1400d8617:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar11 == 0xffffffff) goto LAB_1400d8617;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar19 = *param_4;
      if (lVar19 == 0) {
LAB_1400d865f:
        *param_4 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar11 == 0xffffffff) goto LAB_1400d865f;
        *(char *)((longlong)param_4 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar19 = *param_3;
    pcVar28 = local_d0;
    cVar25 = local_d7;
    uVar13 = local_b8;
    if (lVar19 == 0) {
      if (*param_4 == 0) goto LAB_1400d8690;
    }
    else if (*param_4 != 0) goto LAB_1400d8690;
    if ((char)param_3[1] == '\0') {
      if (lVar19 == 0) {
LAB_1400d870c:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar11 == 0xffffffff) goto LAB_1400d870c;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    pcVar28 = local_d0;
    cVar25 = local_d7;
    uVar13 = local_b8;
    if (*(byte *)((longlong)param_3 + 9) != bVar1) goto LAB_1400d8690;
    local_d7 = '\x01';
    lVar19 = *param_3;
    if (lVar19 == 0) {
LAB_1400d8772:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      lVar14 = lVar14 + -1;
    }
    else {
      if (**(longlong **)(lVar19 + 0x38) == 0) {
LAB_1400d8757:
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        iVar3 = **(int **)(lVar19 + 0x50);
        if (iVar3 < 1) goto LAB_1400d8757;
        **(int **)(lVar19 + 0x50) = iVar3 + -1;
        pbVar4 = (byte *)**(longlong **)(lVar19 + 0x38);
        **(longlong **)(lVar19 + 0x38) = (longlong)(pbVar4 + 1);
        uVar11 = (uint)*pbVar4;
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d8772;
      *(undefined1 *)(param_3 + 1) = 0;
      lVar14 = lVar14 + -1;
    }
    goto LAB_1400d84f0;
  }
LAB_1400d8690:
  local_c0 = lVar14;
  if ((char)param_3[1] == '\0') {
    lVar14 = *param_3;
    if (lVar14 == 0) {
LAB_1400d8795:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d8795;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar14 = *param_4;
    if (lVar14 == 0) {
LAB_1400d87e1:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d87e1;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar14 = *param_3;
  if (lVar14 == 0) {
    if (*param_4 == 0) goto LAB_1400d8805;
  }
  else if (*param_4 != 0) goto LAB_1400d8805;
  if ((char)param_3[1] == '\0') {
    if (lVar14 == 0) {
LAB_1400d88fc:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d88fc;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar14 = thunk_FUN_1400daaa0(local_68,local_4c,*(undefined1 *)((longlong)param_3 + 9));
  uVar15 = lVar14 - (longlong)local_68;
  if (uVar13 <= uVar15) goto LAB_1400d8805;
  if (iVar27 < local_c4) {
    *pcVar28 = "0123456789ABCDEFabcdef-+XxPp"[uVar15];
    pcVar28 = pcVar28 + 1;
    iVar27 = iVar27 + 1;
  }
  else if (uVar15 != 0) {
    bVar5 = true;
  }
  lVar14 = *param_3;
  cVar25 = '\x01';
  if (lVar14 == 0) {
LAB_1400d89a7:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    lVar14 = local_c0;
  }
  else {
    if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_1400d898c:
      uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar3 = **(int **)(lVar14 + 0x50);
      if (iVar3 < 1) goto LAB_1400d898c;
      **(int **)(lVar14 + 0x50) = iVar3 + -1;
      pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
      **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
      uVar11 = (uint)*pbVar4;
    }
    if (uVar11 == 0xffffffff) goto LAB_1400d89a7;
    *(undefined1 *)(param_3 + 1) = 0;
    lVar14 = local_c0;
  }
  goto LAB_1400d8690;
LAB_1400d8805:
  cVar8 = local_d6;
  if (bVar5) {
    pcVar26 = pcVar28 + -1;
    cVar9 = *pcVar26;
    if (cVar9 == local_c8) {
      pcVar26 = pcVar28 + -2;
      cVar9 = *pcVar26;
    }
    if (cVar9 != '0') {
      cVar10 = '5';
      if (local_d6 != '\0') {
        cVar10 = '8';
      }
      if (cVar9 != cVar10) goto LAB_1400d8845;
    }
    *pcVar26 = cVar9 + '\x01';
  }
LAB_1400d8845:
  lVar14 = 0x14;
  if (local_d6 != '\0') {
    lVar14 = 0x1b;
  }
  lVar19 = 0xe;
  if (local_d6 != '\0') {
    lVar19 = 0x1a;
  }
  local_d0 = pcVar28;
  if (cVar25 == '\0') goto LAB_1400d9108;
  lVar23 = 0;
  bVar1 = local_68[lVar14];
  bVar2 = local_68[lVar19];
  if ((char)param_3[1] == '\0') {
    lVar14 = *param_3;
    if (lVar14 == 0) {
LAB_1400d89ce:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d89ce;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar14 = *param_4;
    if (lVar14 == 0) {
LAB_1400d8a14:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d8a14;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar14 = *param_3;
  if (lVar14 == 0) {
    if (*param_4 == 0) goto LAB_1400d8dcf;
  }
  else if (*param_4 != 0) goto LAB_1400d8dcf;
  cVar25 = (char)param_3[1];
  if (cVar25 == '\0') {
    if (lVar14 == 0) {
LAB_1400d8a78:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d8a78;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    cVar25 = '\x01';
  }
  if (*(byte *)((longlong)param_3 + 9) != bVar1) {
    if (cVar25 == '\0') {
      lVar14 = *param_3;
      if (lVar14 != 0) {
        if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar14 + 0x50) < 1)) {
          uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
        }
        if (uVar11 != 0xffffffff) {
          *(char *)((longlong)param_3 + 9) = (char)uVar11;
          *(undefined1 *)(param_3 + 1) = 1;
          goto LAB_1400d8ada;
        }
      }
      *param_3 = 0;
      uVar11 = (uint)*(byte *)((longlong)param_3 + 9);
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      uVar11 = (uint)*(byte *)((longlong)param_3 + 9);
    }
LAB_1400d8ada:
    if ((byte)uVar11 != bVar2) {
LAB_1400d8dcf:
      lVar14 = 0x44c;
      if (cVar8 != '\0') {
        lVar14 = 0x1068;
      }
      uVar11 = 0x44c;
      if (cVar8 != '\0') {
        uVar11 = 0x41a;
      }
      uVar13 = (ulonglong)uVar11;
      lVar19 = local_c0;
LAB_1400d8df4:
      lVar20 = lVar14;
      if ((((-1 < lVar23) && (-1 < lVar19)) && ((lVar14 <= lVar23 || ((longlong)uVar13 <= lVar19))))
         || (((lVar23 < 1 && (lVar19 < 1)) &&
             ((lVar20 = -lVar14, lVar23 <= lVar20 || (lVar19 <= (longlong)-uVar13))))))
      goto LAB_1400d9056;
      lVar20 = -lVar23;
      if (-lVar23 < 0) {
        lVar20 = lVar23;
      }
      if (lVar20 <= lVar14) {
        lVar21 = -lVar19;
        if (-lVar19 < 0) {
          lVar21 = lVar19;
        }
        if (lVar21 <= (longlong)uVar13) goto LAB_1400d9030;
      }
      if (cVar8 != '\0') {
        lVar21 = lVar20 + -1;
        if (lVar21 < 0) {
          lVar21 = lVar20 + 2;
        }
        lVar20 = (lVar21 >> 2) + 1;
      }
      lVar21 = -local_c0;
      if (-local_c0 < 0) {
        lVar21 = local_c0;
      }
      if (lVar21 < lVar20) {
        lVar20 = lVar21;
      }
      if (lVar23 < 0) {
        lVar21 = lVar20 * 4;
        if (cVar8 == '\0') {
          lVar21 = lVar20;
        }
        lVar23 = lVar23 + lVar21;
        lVar19 = lVar19 - lVar20;
      }
      else {
        lVar21 = lVar20 * 4;
        if (cVar8 == '\0') {
          lVar21 = lVar20;
        }
        lVar23 = lVar23 - lVar21;
        lVar19 = lVar19 + lVar20;
      }
      goto LAB_1400d8df4;
    }
  }
  bVar5 = false;
  lVar14 = *param_3;
  if (lVar14 == 0) {
LAB_1400d8b66:
    *param_3 = 0;
  }
  else {
    if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_1400d8b18:
      uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar27 = **(int **)(lVar14 + 0x50);
      if (iVar27 < 1) goto LAB_1400d8b18;
      **(int **)(lVar14 + 0x50) = iVar27 + -1;
      pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
      **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
      uVar11 = (uint)*pbVar4;
    }
    if (uVar11 == 0xffffffff) goto LAB_1400d8b66;
    *(undefined1 *)(param_3 + 1) = 0;
    lVar14 = *param_3;
    if (lVar14 == 0) goto LAB_1400d8b66;
    if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) || (**(int **)(lVar14 + 0x50) < 1)
       ) {
      uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
    }
    if (uVar11 == 0xffffffff) goto LAB_1400d8b66;
    *(char *)((longlong)param_3 + 9) = (char)uVar11;
  }
  bVar7 = false;
  *(undefined1 *)(param_3 + 1) = 1;
  if ((char)param_4[1] == '\0') {
    lVar14 = *param_4;
    if (lVar14 == 0) {
LAB_1400d8baf:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d8baf;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar14 = *param_3;
  bVar1 = local_d5;
  if (lVar14 == 0) {
    bVar6 = bVar5;
    if (*param_4 == 0) goto LAB_1400d8cd4;
  }
  else {
    bVar6 = false;
    if (*param_4 != 0) goto LAB_1400d8cd4;
  }
  if ((char)param_3[1] == '\0') {
    if (lVar14 == 0) {
LAB_1400d8c11:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d8c11;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(char *)((longlong)param_3 + 9) != local_d4) {
    bVar1 = local_d5;
    bVar6 = false;
    if (*(char *)((longlong)param_3 + 9) != local_d3) goto LAB_1400d8cd4;
    lVar14 = *param_3;
    bVar6 = true;
    if (lVar14 != 0) {
      if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_1400d8cb0:
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        iVar27 = **(int **)(lVar14 + 0x50);
        if (iVar27 < 1) goto LAB_1400d8cb0;
        **(int **)(lVar14 + 0x50) = iVar27 + -1;
        pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
        **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
        uVar11 = (uint)*pbVar4;
      }
      if (uVar11 != 0xffffffff) {
        *(undefined1 *)(param_3 + 1) = 0;
        bVar1 = local_d5;
        goto LAB_1400d8cd4;
      }
    }
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    bVar1 = local_d5;
    goto LAB_1400d8cd4;
  }
  lVar14 = *param_3;
  if (lVar14 != 0) {
    if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_1400d8c53:
      uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar27 = **(int **)(lVar14 + 0x50);
      if (iVar27 < 1) goto LAB_1400d8c53;
      **(int **)(lVar14 + 0x50) = iVar27 + -1;
      pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
      **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
      uVar11 = (uint)*pbVar4;
    }
    if (uVar11 != 0xffffffff) {
      *(undefined1 *)(param_3 + 1) = 0;
      bVar1 = local_d5;
      bVar6 = bVar5;
      goto LAB_1400d8cd4;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
  bVar1 = local_d5;
  bVar6 = bVar5;
LAB_1400d8cd4:
  if ((char)param_3[1] == '\0') {
    lVar14 = *param_3;
    if (lVar14 == 0) {
LAB_1400d8d12:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d8d12;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar14 = *param_4;
    if (lVar14 == 0) {
LAB_1400d8d58:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d8d58;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar14 = *param_3;
  cVar8 = local_d6;
  if (lVar14 == 0) {
    if (*param_4 == 0) goto LAB_1400d8d87;
  }
  else if (*param_4 != 0) goto LAB_1400d8d87;
  if ((char)param_3[1] == '\0') {
    if (lVar14 == 0) {
LAB_1400d8ee9:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1400d8ee9;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  cVar8 = local_d6;
  if (*(byte *)((longlong)param_3 + 9) != bVar1) goto LAB_1400d8d87;
  bVar7 = true;
  lVar14 = *param_3;
  if (lVar14 == 0) {
LAB_1400d8f4a:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_1400d8f2f:
      uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar27 = **(int **)(lVar14 + 0x50);
      if (iVar27 < 1) goto LAB_1400d8f2f;
      **(int **)(lVar14 + 0x50) = iVar27 + -1;
      pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
      **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
      uVar11 = (uint)*pbVar4;
    }
    if (uVar11 == 0xffffffff) goto LAB_1400d8f4a;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1400d8cd4;
LAB_1400d8d87:
  if ((char)param_3[1] == '\0') {
    FUN_1400d64e0(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1400d64e0(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 == 0) goto LAB_1400d8dba;
  }
  else if (*param_4 != 0) goto LAB_1400d8dba;
  if ((char)param_3[1] == '\0') {
    FUN_1400d64e0(param_3);
  }
  lVar14 = thunk_FUN_1400daaa0(local_68,local_4c,*(undefined1 *)((longlong)param_3 + 9));
  uVar13 = lVar14 - (longlong)local_68;
  if (9 < uVar13) goto LAB_1400d8dba;
  if ((lVar23 < 0xccccccccccccccc) || ((lVar23 == 0xccccccccccccccc && ((longlong)uVar13 < 8)))) {
    lVar23 = uVar13 + lVar23 * 10;
  }
  else {
    lVar23 = 0x7fffffffffffffff;
  }
  bVar7 = true;
  lVar14 = *param_3;
  if (lVar14 == 0) {
LAB_1400d9008:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_1400d8fed:
      uVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar27 = **(int **)(lVar14 + 0x50);
      if (iVar27 < 1) goto LAB_1400d8fed;
      **(int **)(lVar14 + 0x50) = iVar27 + -1;
      pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
      **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
      uVar11 = (uint)*pbVar4;
    }
    if (uVar11 == 0xffffffff) goto LAB_1400d9008;
    *(undefined1 *)(param_3 + 1) = 0;
    bVar7 = true;
  }
  goto LAB_1400d8d87;
LAB_1400d8dba:
  if (bVar6) {
    lVar23 = -lVar23;
  }
  pcVar28 = local_d0;
  if (!bVar7) goto LAB_1400d9108;
  goto LAB_1400d8dcf;
LAB_1400d9030:
  if (cVar8 != '\0') {
    lVar19 = lVar19 * 4;
  }
  lVar19 = lVar19 + lVar23;
  lVar20 = lVar14;
  if ((lVar19 <= lVar14) && (lVar20 = lVar19, lVar19 < -lVar14)) {
    lVar20 = -lVar14;
  }
LAB_1400d9056:
  if (lVar20 != 0) {
    cVar25 = 'e';
    if (cVar8 != '\0') {
      cVar25 = 'p';
    }
    *pcVar28 = cVar25;
    pcVar26 = pcVar28 + 1;
    if (lVar20 < 0) {
      *pcVar26 = '-';
      pcVar26 = pcVar28 + 2;
    }
    lVar14 = -lVar20;
    pcVar28 = pcVar26;
    if (-lVar20 < 0) {
      lVar14 = lVar20;
    }
    while (lVar14 != 0) {
      *pcVar28 = (char)lVar14 + (char)(lVar14 / 10) * -10 + '0';
      lVar14 = lVar14 / 10;
      pcVar28 = pcVar28 + 1;
    }
    thunk_FUN_1400da9a0(pcVar26,pcVar28);
  }
  *pcVar28 = '\0';
  goto LAB_1400d9108;
}

