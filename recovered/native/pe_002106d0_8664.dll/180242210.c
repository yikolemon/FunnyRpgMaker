/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180242210 */

/* WARNING: Removing unreachable block (ram,0x00018024303e) */

void FUN_180242210(undefined1 *param_1,int param_2,longlong *param_3,longlong *param_4,
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
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_108;
  local_c4 = param_2;
  uVar12 = FUN_18001c0ec(param_5);
  (*(code *)PTR__guard_dispatch_icall_18038bc80)
            (uVar12,"0123456789ABCDEFabcdef-+XxPp",&DAT_1802dd14d,local_68);
  local_d4 = abStack_5a[9];
  local_d3 = abStack_5a[8];
  local_d5 = local_68[0];
  uVar12 = FUN_18000b3c1(param_5);
  local_b0 = uVar12;
  (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar12,local_88);
  if (local_78 == 0) {
    cVar8 = '\0';
  }
  else {
    cVar8 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar12);
    cVar25 = '\0';
    local_d8 = 0;
    if (local_78 != 0) {
      lVar14 = *param_3;
LAB_180242324:
      if ((char)param_3[1] == '\0') {
        if (lVar14 == 0) {
LAB_180242360:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar14 + 0x50) < 1)) {
            uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
          }
          if (uVar11 == 0xffffffff) goto LAB_180242360;
          *(char *)((longlong)param_3 + 9) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar14 = *param_4;
        if (lVar14 == 0) {
LAB_1802423a8:
          *param_4 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar14 + 0x50) < 1)) {
            uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
          }
          if (uVar11 == 0xffffffff) goto LAB_1802423a8;
          *(char *)((longlong)param_4 + 9) = (char)uVar11;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar14 = *param_3;
      if (lVar14 == 0) {
        if (*param_4 == 0) goto LAB_1802422c1;
      }
      else if (*param_4 != 0) goto LAB_1802422c1;
      if ((char)param_3[1] == '\0') {
        if (lVar14 == 0) {
LAB_18024240b:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar14 + 0x50) < 1)) {
            uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
          }
          if (uVar11 == 0xffffffff) goto LAB_18024240b;
          *(char *)((longlong)param_3 + 9) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(char *)((longlong)param_3 + 9) != cVar8) goto LAB_1802422c1;
      lVar14 = *param_3;
      if (lVar14 == 0) {
LAB_18024246d:
        *param_3 = 0;
        lVar14 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
        cVar25 = '\x01';
      }
      else {
        if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_18024244b:
          uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          iVar27 = **(int **)(lVar14 + 0x50);
          if (iVar27 < 1) goto LAB_18024244b;
          **(int **)(lVar14 + 0x50) = iVar27 + -1;
          pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
          **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
          uVar11 = (uint)*pbVar4;
        }
        if (uVar11 == 0xffffffff) goto LAB_18024246d;
        lVar14 = *param_3;
        *(undefined1 *)(param_3 + 1) = 0;
        cVar25 = '\x01';
      }
      goto LAB_180242324;
    }
  }
  local_d8 = '\0';
  cVar25 = local_d8;
LAB_1802422c1:
  local_d8 = cVar25;
  if ((char)param_3[1] == '\0') {
    lVar14 = *param_3;
    if (lVar14 == 0) {
LAB_18024249d:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_18024249d;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar14 = *param_4;
    if (lVar14 == 0) {
LAB_1802424e5:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1802424e5;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar14 = *param_3;
  if (lVar14 == 0) {
    if (*param_4 != 0) {
LAB_18024250c:
      if ((char)param_3[1] == '\0') {
        if (lVar14 == 0) {
LAB_180242548:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar14 + 0x50) < 1)) {
            uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
          }
          if (uVar11 == 0xffffffff) goto LAB_180242548;
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
LAB_180242592:
            uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            iVar27 = **(int **)(lVar14 + 0x50);
            if (iVar27 < 1) goto LAB_180242592;
            **(int **)(lVar14 + 0x50) = iVar27 + -1;
            pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
            **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
            uVar11 = (uint)*pbVar4;
          }
          if (uVar11 != 0xffffffff) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_180242613;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (*(char *)((longlong)param_3 + 9) != local_d3) goto LAB_180242613;
        *param_1 = 0x2d;
        param_1 = param_1 + 1;
        lVar14 = *param_3;
        if (lVar14 != 0) {
          if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_1802425f4:
            uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            iVar27 = **(int **)(lVar14 + 0x50);
            if (iVar27 < 1) goto LAB_1802425f4;
            **(int **)(lVar14 + 0x50) = iVar27 + -1;
            pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
            **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
            uVar11 = (uint)*pbVar4;
          }
          if (uVar11 != 0xffffffff) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_180242613;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
    }
  }
  else if (*param_4 == 0) goto LAB_18024250c;
LAB_180242613:
  *param_1 = 0x30;
  pcVar28 = param_1 + 1;
  local_d6 = '\0';
  uVar22 = 0;
  local_d7 = '\0';
  local_d0 = pcVar28;
  if ((char)param_3[1] == '\0') {
    lVar14 = *param_3;
    if (lVar14 == 0) {
LAB_180242668:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_180242668;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar14 = *param_4;
    if (lVar14 == 0) {
LAB_1802426b3:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1802426b3;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar14 = *param_3;
  if (lVar14 == 0) {
    if (*param_4 == 0) goto LAB_180242902;
  }
  else if (*param_4 != 0) goto LAB_180242902;
  if ((char)param_3[1] == '\0') {
    if (lVar14 == 0) {
LAB_18024271a:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_18024271a;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(byte *)((longlong)param_3 + 9) != local_d5) goto LAB_180242902;
  lVar14 = *param_3;
  if (lVar14 == 0) {
LAB_1802427b4:
    *param_3 = 0;
  }
  else {
    if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_180242765:
      uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar27 = **(int **)(lVar14 + 0x50);
      if (iVar27 < 1) goto LAB_180242765;
      **(int **)(lVar14 + 0x50) = iVar27 + -1;
      pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
      **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
      uVar11 = (uint)*pbVar4;
    }
    if (uVar11 == 0xffffffff) goto LAB_1802427b4;
    *(undefined1 *)(param_3 + 1) = 0;
    lVar14 = *param_3;
    if (lVar14 == 0) goto LAB_1802427b4;
    if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) || (**(int **)(lVar14 + 0x50) < 1)
       ) {
      uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
    }
    if (uVar11 == 0xffffffff) goto LAB_1802427b4;
    *(char *)((longlong)param_3 + 9) = (char)uVar11;
  }
  *(undefined1 *)(param_3 + 1) = 1;
  if ((char)param_4[1] == '\0') {
    lVar14 = *param_4;
    if (lVar14 == 0) {
LAB_1802427ff:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1802427ff;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar14 = *param_3;
  if (lVar14 == 0) {
    if (*param_4 != 0) {
LAB_18024281b:
      cVar25 = (char)param_3[1];
      if (cVar25 == '\0') {
        if (lVar14 == 0) {
LAB_180242872:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar14 + 0x50) < 1)) {
            uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
          }
          if (uVar11 == 0xffffffff) goto LAB_180242872;
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
              uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
            }
            if (uVar11 != 0xffffffff) {
              *(char *)((longlong)param_3 + 9) = (char)uVar11;
              *(undefined1 *)(param_3 + 1) = 1;
              goto LAB_1802428dd;
            }
          }
          *param_3 = 0;
          uVar11 = (uint)*(byte *)((longlong)param_3 + 9);
          *(undefined1 *)(param_3 + 1) = 1;
        }
        else {
          uVar11 = (uint)*(byte *)((longlong)param_3 + 9);
        }
LAB_1802428dd:
        if ((char)uVar11 != abStack_5a[10]) {
          uVar22 = 1;
          local_d7 = '\x01';
          goto LAB_180242902;
        }
      }
      local_d6 = '\x01';
      FUN_180241240(param_3);
      *pcVar28 = 'x';
      local_d0 = param_1 + 2;
LAB_180242902:
      bVar5 = false;
      iVar27 = 0;
      local_c0 = 0;
      uVar13 = 10;
      if (local_d6 != '\0') {
        uVar13 = 0x16;
      }
      local_b8 = uVar13;
      if (local_78 != 0) {
LAB_180242af0:
        if ((char)param_3[1] == '\0') {
          lVar14 = *param_3;
          if (lVar14 == 0) {
LAB_180242b2f:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar14 + 0x50) < 1)) {
              uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
            }
            if (uVar11 == 0xffffffff) goto LAB_180242b2f;
            *(char *)((longlong)param_3 + 9) = (char)uVar11;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((char)param_4[1] == '\0') {
          lVar14 = *param_4;
          if (lVar14 == 0) {
LAB_180242b76:
            *param_4 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar14 + 0x50) < 1)) {
              uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
            }
            if (uVar11 == 0xffffffff) goto LAB_180242b76;
            *(char *)((longlong)param_4 + 9) = (char)uVar11;
          }
          *(undefined1 *)(param_4 + 1) = 1;
        }
        lVar14 = *param_3;
        if (lVar14 == 0) {
          if (*param_4 == 0) goto LAB_180242b8e;
        }
        else if (*param_4 != 0) goto LAB_180242b8e;
        if ((char)param_3[1] == '\0') {
          if (lVar14 == 0) {
LAB_180242c2c:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar14 + 0x50) < 1)) {
              uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
            }
            if (uVar11 == 0xffffffff) goto LAB_180242c2c;
            *(char *)((longlong)param_3 + 9) = (char)uVar11;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*(char *)((longlong)param_3 + 9) != cVar8) goto LAB_180242b8e;
        lVar14 = *param_3;
        if (lVar14 == 0) {
LAB_180242c90:
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
          local_d8 = '\x01';
        }
        else {
          if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_180242c6f:
            uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            iVar3 = **(int **)(lVar14 + 0x50);
            if (iVar3 < 1) goto LAB_180242c6f;
            **(int **)(lVar14 + 0x50) = iVar3 + -1;
            pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
            **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
            uVar11 = (uint)*pbVar4;
          }
          if (uVar11 == 0xffffffff) goto LAB_180242c90;
          *(undefined1 *)(param_3 + 1) = 0;
          local_d8 = '\x01';
        }
        goto LAB_180242af0;
      }
LAB_180242930:
      if ((char)param_3[1] == '\0') {
        lVar14 = *param_3;
        if (lVar14 == 0) {
LAB_18024296f:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar14 + 0x50) < 1)) {
            uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
          }
          if (uVar11 == 0xffffffff) goto LAB_18024296f;
          *(char *)((longlong)param_3 + 9) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar14 = *param_4;
        if (lVar14 == 0) {
LAB_1802429bb:
          *param_4 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar14 + 0x50) < 1)) {
            uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
          }
          if (uVar11 == 0xffffffff) goto LAB_1802429bb;
          *(char *)((longlong)param_4 + 9) = (char)uVar11;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar14 = *param_3;
      if (lVar14 == 0) {
        if (*param_4 == 0) goto LAB_18024310b;
      }
      else if (*param_4 != 0) goto LAB_18024310b;
      if ((char)param_3[1] == '\0') {
        if (lVar14 == 0) {
LAB_180242a22:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar14 + 0x50) < 1)) {
            uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
          }
          if (uVar11 == 0xffffffff) goto LAB_180242a22;
          *(char *)((longlong)param_3 + 9) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar14 = thunk_FUN_18023aef0(local_68,local_4c,*(undefined1 *)((longlong)param_3 + 9));
      uVar15 = lVar14 - (longlong)local_68;
      if (uVar13 <= uVar15) goto LAB_18024310b;
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
LAB_180242ada:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_180242abf:
          uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          iVar3 = **(int **)(lVar14 + 0x50);
          if (iVar3 < 1) goto LAB_180242abf;
          **(int **)(lVar14 + 0x50) = iVar3 + -1;
          pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
          **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
          uVar11 = (uint)*pbVar4;
        }
        if (uVar11 == 0xffffffff) goto LAB_180242ada;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_180242930;
    }
  }
  else if (*param_4 == 0) goto LAB_18024281b;
  *pcVar28 = '\0';
LAB_180243e18:
  FUN_180004c8c(local_88);
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_108);
LAB_180242b8e:
  FUN_18023f000(local_a8,1,uVar22);
  uVar13 = local_b8;
  lVar14 = 0;
LAB_180242bb0:
  if ((char)param_3[1] == '\0') {
    lVar19 = *param_3;
    if (lVar19 == 0) {
LAB_180242cb8:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar19 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_180242cb8;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar19 = *param_4;
    if (lVar19 == 0) {
LAB_180242d04:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar19 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_180242d04;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar19 = *param_3;
  if (lVar19 == 0) {
    if (*param_4 == 0) goto LAB_180242d20;
  }
  else if (*param_4 != 0) goto LAB_180242d20;
  if ((char)param_3[1] == '\0') {
    if (lVar19 == 0) {
LAB_180242d8e:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar19 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_180242d8e;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar19 = thunk_FUN_18023aef0(local_68,local_4c,*(undefined1 *)((longlong)param_3 + 9));
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
LAB_180242e62:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar11 == 0xffffffff) goto LAB_180242e62;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(char *)((longlong)param_3 + 9) != cVar8) goto LAB_180242d20;
    ppppppcVar16 = local_a8;
    if (0xf < local_90) {
      ppppppcVar16 = (char ******)local_a8[0];
    }
    if (*(char *)((longlong)ppppppcVar16 + lVar14) == '\0') {
      local_d8 = '\x01';
    }
    else {
      FUN_180003bf2(local_a8);
      lVar14 = lVar14 + 1;
    }
  }
  lVar19 = *param_3;
  if (lVar19 == 0) {
LAB_180242eee:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar19 + 0x38) == 0) {
LAB_180242ed3:
      uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar3 = **(int **)(lVar19 + 0x50);
      if (iVar3 < 1) goto LAB_180242ed3;
      **(int **)(lVar19 + 0x50) = iVar3 + -1;
      pbVar4 = (byte *)**(longlong **)(lVar19 + 0x38);
      **(longlong **)(lVar19 + 0x38) = (longlong)(pbVar4 + 1);
      uVar11 = (uint)*pbVar4;
    }
    if (uVar11 == 0xffffffff) goto LAB_180242eee;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_180242bb0;
LAB_180242d20:
  uVar12 = local_b0;
  if (lVar14 != 0) {
    ppppppcVar16 = local_a8;
    if (0xf < local_90) {
      ppppppcVar16 = (char ******)local_a8[0];
    }
    if (*(char *)((longlong)ppppppcVar16 + lVar14) < '\x01') goto LAB_180242efe;
    lVar14 = lVar14 + 1;
  }
  do {
    if ((char)param_3[1] == '\0') {
      lVar19 = *param_3;
      if (lVar19 == 0) {
LAB_180242f42:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar11 == 0xffffffff) goto LAB_180242f42;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar19 = *param_4;
      if (lVar19 == 0) {
LAB_180242f8e:
        *param_4 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar11 == 0xffffffff) goto LAB_180242f8e;
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
LAB_180243088:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar11 == 0xffffffff) goto LAB_180243088;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(char *)((longlong)param_3 + 9) != cVar8) break;
    lVar19 = *param_3;
    if (lVar19 == 0) {
LAB_1802430ec:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar19 + 0x38) == 0) {
LAB_1802430d0:
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar3 = **(int **)(lVar19 + 0x50);
        if (iVar3 < 1) goto LAB_1802430d0;
        **(int **)(lVar19 + 0x50) = iVar3 + -1;
        pbVar4 = (byte *)**(longlong **)(lVar19 + 0x38);
        **(longlong **)(lVar19 + 0x38) = (longlong)(pbVar4 + 1);
        uVar11 = (uint)*pbVar4;
      }
      if (uVar11 == 0xffffffff) goto LAB_1802430ec;
      *(undefined1 *)(param_3 + 1) = 0;
    }
LAB_180242efe:
    local_d8 = '\x01';
  } while( true );
  ppppppcVar16 = local_88;
  if (0xf < local_70) {
    ppppppcVar16 = (char ******)local_88[0];
  }
  ppppppcVar24 = (char ******)((longlong)ppppppcVar16 + local_78);
  cVar25 = '\0';
  if (local_d8 == '\0') {
LAB_180242fe0:
    do {
      do {
        if (lVar14 == 0) goto LAB_180243102;
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
        if (lVar14 != 0) goto LAB_180242fe0;
      }
      ppppppcVar17 = local_a8;
      if (0xf < local_90) {
        ppppppcVar17 = (char ******)local_a8[0];
      }
    } while (*(char *)ppppppcVar17 <= cVar25);
    local_d8 = '\x01';
  }
LAB_180243102:
  FUN_180004c8c(local_a8);
LAB_18024310b:
  if (((local_d6 != '\0') && (local_d7 != '\0')) && (iVar27 == 0)) {
    *local_d0 = '0';
    local_d0 = local_d0 + 1;
  }
  puVar18 = (undefined8 *)FUN_180287560();
  cVar25 = *(char *)*puVar18;
  local_c8 = cVar25;
  if ((char)param_3[1] == '\0') {
    lVar14 = *param_3;
    if (lVar14 == 0) {
LAB_180243178:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_180243178;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar14 = *param_4;
    if (lVar14 == 0) {
LAB_1802431c4:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1802431c4;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar14 = *param_3;
  pcVar28 = local_d0;
  if (lVar14 == 0) {
    if (*param_4 == 0) goto LAB_1802431e6;
  }
  else if (*param_4 != 0) goto LAB_1802431e6;
  if ((char)param_3[1] == '\0') {
    if (lVar14 == 0) {
LAB_18024327c:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_18024327c;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  cVar8 = *(char *)((longlong)param_3 + 9);
  cVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar12);
  pcVar28 = local_d0;
  if (cVar8 != cVar9) goto LAB_1802431e6;
  *local_d0 = cVar25;
  pcVar28 = local_d0 + 1;
  lVar14 = *param_3;
  local_d0 = pcVar28;
  if (lVar14 != 0) {
    if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_1802432e7:
      uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar3 = **(int **)(lVar14 + 0x50);
      if (iVar3 < 1) goto LAB_1802432e7;
      **(int **)(lVar14 + 0x50) = iVar3 + -1;
      pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
      **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
      uVar11 = (uint)*pbVar4;
    }
    if (uVar11 != 0xffffffff) {
      *(undefined1 *)(param_3 + 1) = 0;
      goto LAB_1802431e6;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
LAB_1802431e6:
  bVar1 = local_d5;
  lVar14 = local_c0;
  cVar25 = local_d7;
  uVar13 = local_b8;
  if (iVar27 == 0) {
LAB_180243200:
    if ((char)param_3[1] == '\0') {
      lVar19 = *param_3;
      if (lVar19 == 0) {
LAB_180243327:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar11 == 0xffffffff) goto LAB_180243327;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar19 = *param_4;
      if (lVar19 == 0) {
LAB_18024336f:
        *param_4 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar11 == 0xffffffff) goto LAB_18024336f;
        *(char *)((longlong)param_4 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar19 = *param_3;
    pcVar28 = local_d0;
    cVar25 = local_d7;
    uVar13 = local_b8;
    if (lVar19 == 0) {
      if (*param_4 == 0) goto LAB_1802433a0;
    }
    else if (*param_4 != 0) goto LAB_1802433a0;
    if ((char)param_3[1] == '\0') {
      if (lVar19 == 0) {
LAB_18024341c:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar11 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar11 == 0xffffffff) goto LAB_18024341c;
        *(char *)((longlong)param_3 + 9) = (char)uVar11;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    pcVar28 = local_d0;
    cVar25 = local_d7;
    uVar13 = local_b8;
    if (*(byte *)((longlong)param_3 + 9) != bVar1) goto LAB_1802433a0;
    local_d7 = '\x01';
    lVar19 = *param_3;
    if (lVar19 == 0) {
LAB_180243482:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      lVar14 = lVar14 + -1;
    }
    else {
      if (**(longlong **)(lVar19 + 0x38) == 0) {
LAB_180243467:
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar3 = **(int **)(lVar19 + 0x50);
        if (iVar3 < 1) goto LAB_180243467;
        **(int **)(lVar19 + 0x50) = iVar3 + -1;
        pbVar4 = (byte *)**(longlong **)(lVar19 + 0x38);
        **(longlong **)(lVar19 + 0x38) = (longlong)(pbVar4 + 1);
        uVar11 = (uint)*pbVar4;
      }
      if (uVar11 == 0xffffffff) goto LAB_180243482;
      *(undefined1 *)(param_3 + 1) = 0;
      lVar14 = lVar14 + -1;
    }
    goto LAB_180243200;
  }
LAB_1802433a0:
  local_c0 = lVar14;
  if ((char)param_3[1] == '\0') {
    lVar14 = *param_3;
    if (lVar14 == 0) {
LAB_1802434a5:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1802434a5;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar14 = *param_4;
    if (lVar14 == 0) {
LAB_1802434f1:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1802434f1;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar14 = *param_3;
  if (lVar14 == 0) {
    if (*param_4 == 0) goto LAB_180243515;
  }
  else if (*param_4 != 0) goto LAB_180243515;
  if ((char)param_3[1] == '\0') {
    if (lVar14 == 0) {
LAB_18024360c:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_18024360c;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar14 = thunk_FUN_18023aef0(local_68,local_4c,*(undefined1 *)((longlong)param_3 + 9));
  uVar15 = lVar14 - (longlong)local_68;
  if (uVar13 <= uVar15) goto LAB_180243515;
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
LAB_1802436b7:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    lVar14 = local_c0;
  }
  else {
    if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_18024369c:
      uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar3 = **(int **)(lVar14 + 0x50);
      if (iVar3 < 1) goto LAB_18024369c;
      **(int **)(lVar14 + 0x50) = iVar3 + -1;
      pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
      **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
      uVar11 = (uint)*pbVar4;
    }
    if (uVar11 == 0xffffffff) goto LAB_1802436b7;
    *(undefined1 *)(param_3 + 1) = 0;
    lVar14 = local_c0;
  }
  goto LAB_1802433a0;
LAB_180243515:
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
      if (cVar9 != cVar10) goto LAB_180243555;
    }
    *pcVar26 = cVar9 + '\x01';
  }
LAB_180243555:
  lVar14 = 0x14;
  if (local_d6 != '\0') {
    lVar14 = 0x1b;
  }
  lVar19 = 0xe;
  if (local_d6 != '\0') {
    lVar19 = 0x1a;
  }
  local_d0 = pcVar28;
  if (cVar25 == '\0') goto LAB_180243e18;
  lVar23 = 0;
  bVar1 = local_68[lVar14];
  bVar2 = local_68[lVar19];
  if ((char)param_3[1] == '\0') {
    lVar14 = *param_3;
    if (lVar14 == 0) {
LAB_1802436de:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1802436de;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar14 = *param_4;
    if (lVar14 == 0) {
LAB_180243724:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_180243724;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar14 = *param_3;
  if (lVar14 == 0) {
    if (*param_4 == 0) goto LAB_180243adf;
  }
  else if (*param_4 != 0) goto LAB_180243adf;
  cVar25 = (char)param_3[1];
  if (cVar25 == '\0') {
    if (lVar14 == 0) {
LAB_180243788:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_180243788;
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
          uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
        }
        if (uVar11 != 0xffffffff) {
          *(char *)((longlong)param_3 + 9) = (char)uVar11;
          *(undefined1 *)(param_3 + 1) = 1;
          goto LAB_1802437ea;
        }
      }
      *param_3 = 0;
      uVar11 = (uint)*(byte *)((longlong)param_3 + 9);
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      uVar11 = (uint)*(byte *)((longlong)param_3 + 9);
    }
LAB_1802437ea:
    if ((byte)uVar11 != bVar2) {
LAB_180243adf:
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
LAB_180243b04:
      lVar20 = lVar14;
      if ((((-1 < lVar23) && (-1 < lVar19)) && ((lVar14 <= lVar23 || ((longlong)uVar13 <= lVar19))))
         || (((lVar23 < 1 && (lVar19 < 1)) &&
             ((lVar20 = -lVar14, lVar23 <= lVar20 || (lVar19 <= (longlong)-uVar13))))))
      goto LAB_180243d66;
      lVar20 = -lVar23;
      if (-lVar23 < 0) {
        lVar20 = lVar23;
      }
      if (lVar20 <= lVar14) {
        lVar21 = -lVar19;
        if (-lVar19 < 0) {
          lVar21 = lVar19;
        }
        if (lVar21 <= (longlong)uVar13) goto LAB_180243d40;
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
      goto LAB_180243b04;
    }
  }
  bVar5 = false;
  lVar14 = *param_3;
  if (lVar14 == 0) {
LAB_180243876:
    *param_3 = 0;
  }
  else {
    if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_180243828:
      uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar27 = **(int **)(lVar14 + 0x50);
      if (iVar27 < 1) goto LAB_180243828;
      **(int **)(lVar14 + 0x50) = iVar27 + -1;
      pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
      **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
      uVar11 = (uint)*pbVar4;
    }
    if (uVar11 == 0xffffffff) goto LAB_180243876;
    *(undefined1 *)(param_3 + 1) = 0;
    lVar14 = *param_3;
    if (lVar14 == 0) goto LAB_180243876;
    if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) || (**(int **)(lVar14 + 0x50) < 1)
       ) {
      uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
    }
    if (uVar11 == 0xffffffff) goto LAB_180243876;
    *(char *)((longlong)param_3 + 9) = (char)uVar11;
  }
  bVar7 = false;
  *(undefined1 *)(param_3 + 1) = 1;
  if ((char)param_4[1] == '\0') {
    lVar14 = *param_4;
    if (lVar14 == 0) {
LAB_1802438bf:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_1802438bf;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar14 = *param_3;
  bVar1 = local_d5;
  if (lVar14 == 0) {
    bVar6 = bVar5;
    if (*param_4 == 0) goto LAB_1802439e4;
  }
  else {
    bVar6 = false;
    if (*param_4 != 0) goto LAB_1802439e4;
  }
  if ((char)param_3[1] == '\0') {
    if (lVar14 == 0) {
LAB_180243921:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_180243921;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(char *)((longlong)param_3 + 9) != local_d4) {
    bVar1 = local_d5;
    bVar6 = false;
    if (*(char *)((longlong)param_3 + 9) != local_d3) goto LAB_1802439e4;
    lVar14 = *param_3;
    bVar6 = true;
    if (lVar14 != 0) {
      if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_1802439c0:
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar27 = **(int **)(lVar14 + 0x50);
        if (iVar27 < 1) goto LAB_1802439c0;
        **(int **)(lVar14 + 0x50) = iVar27 + -1;
        pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
        **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
        uVar11 = (uint)*pbVar4;
      }
      if (uVar11 != 0xffffffff) {
        *(undefined1 *)(param_3 + 1) = 0;
        bVar1 = local_d5;
        goto LAB_1802439e4;
      }
    }
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    bVar1 = local_d5;
    goto LAB_1802439e4;
  }
  lVar14 = *param_3;
  if (lVar14 != 0) {
    if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_180243963:
      uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar27 = **(int **)(lVar14 + 0x50);
      if (iVar27 < 1) goto LAB_180243963;
      **(int **)(lVar14 + 0x50) = iVar27 + -1;
      pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
      **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
      uVar11 = (uint)*pbVar4;
    }
    if (uVar11 != 0xffffffff) {
      *(undefined1 *)(param_3 + 1) = 0;
      bVar1 = local_d5;
      bVar6 = bVar5;
      goto LAB_1802439e4;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
  bVar1 = local_d5;
  bVar6 = bVar5;
LAB_1802439e4:
  if ((char)param_3[1] == '\0') {
    lVar14 = *param_3;
    if (lVar14 == 0) {
LAB_180243a22:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_180243a22;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar14 = *param_4;
    if (lVar14 == 0) {
LAB_180243a68:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_180243a68;
      *(char *)((longlong)param_4 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar14 = *param_3;
  cVar8 = local_d6;
  if (lVar14 == 0) {
    if (*param_4 == 0) goto LAB_180243a97;
  }
  else if (*param_4 != 0) goto LAB_180243a97;
  if ((char)param_3[1] == '\0') {
    if (lVar14 == 0) {
LAB_180243bf9:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar14 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar14 + 0x50) < 1)) {
        uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar11 = (uint)*(byte *)**(undefined8 **)(lVar14 + 0x38);
      }
      if (uVar11 == 0xffffffff) goto LAB_180243bf9;
      *(char *)((longlong)param_3 + 9) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  cVar8 = local_d6;
  if (*(byte *)((longlong)param_3 + 9) != bVar1) goto LAB_180243a97;
  bVar7 = true;
  lVar14 = *param_3;
  if (lVar14 == 0) {
LAB_180243c5a:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_180243c3f:
      uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar27 = **(int **)(lVar14 + 0x50);
      if (iVar27 < 1) goto LAB_180243c3f;
      **(int **)(lVar14 + 0x50) = iVar27 + -1;
      pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
      **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
      uVar11 = (uint)*pbVar4;
    }
    if (uVar11 == 0xffffffff) goto LAB_180243c5a;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1802439e4;
LAB_180243a97:
  if ((char)param_3[1] == '\0') {
    FUN_1800e5e14(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1800e5e14(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 == 0) goto LAB_180243aca;
  }
  else if (*param_4 != 0) goto LAB_180243aca;
  if ((char)param_3[1] == '\0') {
    FUN_1800e5e14(param_3);
  }
  lVar14 = thunk_FUN_18023aef0(local_68,local_4c,*(undefined1 *)((longlong)param_3 + 9));
  uVar13 = lVar14 - (longlong)local_68;
  if (9 < uVar13) goto LAB_180243aca;
  if ((lVar23 < 0xccccccccccccccc) || ((lVar23 == 0xccccccccccccccc && ((longlong)uVar13 < 8)))) {
    lVar23 = uVar13 + lVar23 * 10;
  }
  else {
    lVar23 = 0x7fffffffffffffff;
  }
  bVar7 = true;
  lVar14 = *param_3;
  if (lVar14 == 0) {
LAB_180243d18:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_180243cfd:
      uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar27 = **(int **)(lVar14 + 0x50);
      if (iVar27 < 1) goto LAB_180243cfd;
      **(int **)(lVar14 + 0x50) = iVar27 + -1;
      pbVar4 = (byte *)**(longlong **)(lVar14 + 0x38);
      **(longlong **)(lVar14 + 0x38) = (longlong)(pbVar4 + 1);
      uVar11 = (uint)*pbVar4;
    }
    if (uVar11 == 0xffffffff) goto LAB_180243d18;
    *(undefined1 *)(param_3 + 1) = 0;
    bVar7 = true;
  }
  goto LAB_180243a97;
LAB_180243aca:
  if (bVar6) {
    lVar23 = -lVar23;
  }
  pcVar28 = local_d0;
  if (!bVar7) goto LAB_180243e18;
  goto LAB_180243adf;
LAB_180243d40:
  if (cVar8 != '\0') {
    lVar19 = lVar19 * 4;
  }
  lVar19 = lVar19 + lVar23;
  lVar20 = lVar14;
  if ((lVar19 <= lVar14) && (lVar20 = lVar19, lVar19 < -lVar14)) {
    lVar20 = -lVar14;
  }
LAB_180243d66:
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
    thunk_FUN_18023adf0(pcVar26,pcVar28);
  }
  *pcVar28 = '\0';
  goto LAB_180243e18;
}

