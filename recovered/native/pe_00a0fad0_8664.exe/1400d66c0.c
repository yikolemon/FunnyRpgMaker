/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d66c0 */

void FUN_1400d66c0(char *param_1,longlong *param_2,longlong *param_3,uint param_4,undefined8 param_5
                  )

{
  ulonglong uVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  char ****ppppcVar8;
  longlong lVar9;
  char ****ppppcVar10;
  char *pcVar11;
  byte bVar12;
  char cVar13;
  char *pcVar14;
  char ****ppppcVar15;
  char *pcVar16;
  byte bVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auStack_e8 [48];
  byte local_b8;
  char local_b7;
  char local_b6;
  char local_b5;
  char local_b4;
  char *local_b0;
  char *local_a8;
  char ***local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  ulonglong local_88;
  char ***local_80 [2];
  longlong local_70;
  ulonglong local_68;
  char local_60 [22];
  char local_4a;
  char local_49;
  char local_48;
  byte local_47;
  undefined1 local_46 [6];
  ulonglong local_40;
  
  local_40 = DAT_1401c9640 ^ (ulonglong)auStack_e8;
  local_a8 = param_1;
  uVar7 = FUN_14002469f(param_5);
  (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar7,local_80);
  if (local_70 == 0) {
    cVar13 = '\0';
  }
  else {
    cVar13 = (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar7);
  }
  local_b6 = cVar13;
  uVar7 = FUN_14000b3ff(param_5);
  (*(code *)PTR__guard_dispatch_icall_140178c20)
            (uVar7,"0123456789ABCDEFabcdef-+Xx",&DAT_14014301b,local_60);
  local_b7 = '\0';
  if (cVar13 != '\0') {
    lVar19 = *param_2;
LAB_1400d6780:
    if ((char)param_2[1] == '\0') {
      if (lVar19 == 0) {
LAB_1400d67bc:
        *param_2 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_1400d67bc;
        *(char *)((longlong)param_2 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      lVar19 = *param_3;
      if (lVar19 == 0) {
LAB_1400d6804:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_1400d6804;
        *(char *)((longlong)param_3 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar19 = *param_2;
    if (lVar19 == 0) {
      if (*param_3 == 0) goto LAB_1400d681c;
    }
    else if (*param_3 != 0) goto LAB_1400d681c;
    if ((char)param_2[1] == '\0') {
      if (lVar19 == 0) {
LAB_1400d689e:
        *param_2 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_1400d689e;
        *(char *)((longlong)param_2 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(char *)((longlong)param_2 + 9) != cVar13) goto LAB_1400d681c;
    lVar19 = *param_2;
    if (lVar19 == 0) {
LAB_1400d6904:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      local_b7 = '\x01';
      lVar19 = 0;
    }
    else {
      if (**(longlong **)(lVar19 + 0x38) == 0) {
LAB_1400d68e1:
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        iVar2 = **(int **)(lVar19 + 0x50);
        if (iVar2 < 1) goto LAB_1400d68e1;
        **(int **)(lVar19 + 0x50) = iVar2 + -1;
        pbVar3 = (byte *)**(longlong **)(lVar19 + 0x38);
        **(longlong **)(lVar19 + 0x38) = (longlong)(pbVar3 + 1);
        uVar6 = (uint)*pbVar3;
      }
      if (uVar6 == 0xffffffff) goto LAB_1400d6904;
      *(undefined1 *)(param_2 + 1) = 0;
      local_b7 = '\x01';
      lVar19 = *param_2;
    }
    goto LAB_1400d6780;
  }
LAB_1400d681c:
  cVar5 = (char)param_2[1];
  local_b0 = param_1;
  if (cVar5 == '\0') {
    lVar19 = *param_2;
    if (lVar19 == 0) {
LAB_1400d692e:
      *param_2 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar19 + 0x50) < 1)) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_1400d692e;
      *(char *)((longlong)param_2 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    cVar5 = '\x01';
  }
  if ((char)param_3[1] == '\0') {
    lVar19 = *param_3;
    if (lVar19 == 0) {
LAB_1400d697b:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar19 + 0x50) < 1)) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_1400d697b;
      *(char *)((longlong)param_3 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    cVar5 = (char)param_2[1];
  }
  lVar19 = *param_2;
  if (lVar19 == 0) {
    if (*param_3 != 0) {
LAB_1400d699e:
      if (cVar5 == '\0') {
        if (lVar19 != 0) {
          if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar19 + 0x50) < 1)) {
            uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
          }
          if (uVar6 != 0xffffffff) {
            *(char *)((longlong)param_2 + 9) = (char)uVar6;
            *(undefined1 *)(param_2 + 1) = 1;
            cVar5 = '\x01';
            goto LAB_1400d69f9;
          }
        }
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
        cVar5 = '\x01';
      }
LAB_1400d69f9:
      if (*(char *)((longlong)param_2 + 9) == local_49) {
        *param_1 = '+';
        local_b0 = param_1 + 1;
        lVar19 = *param_2;
        if (lVar19 != 0) {
          if (**(longlong **)(lVar19 + 0x38) == 0) {
LAB_1400d6a43:
            uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            iVar2 = **(int **)(lVar19 + 0x50);
            if (iVar2 < 1) goto LAB_1400d6a43;
            **(int **)(lVar19 + 0x50) = iVar2 + -1;
            pbVar3 = (byte *)**(longlong **)(lVar19 + 0x38);
            **(longlong **)(lVar19 + 0x38) = (longlong)(pbVar3 + 1);
            uVar6 = (uint)*pbVar3;
          }
          if (uVar6 != 0xffffffff) {
            cVar5 = '\0';
            *(undefined1 *)(param_2 + 1) = 0;
            goto LAB_1400d6acf;
          }
        }
        *param_2 = 0;
        cVar5 = '\x01';
        *(undefined1 *)(param_2 + 1) = 1;
      }
      else {
        if (*(char *)((longlong)param_2 + 9) != local_4a) goto LAB_1400d6acf;
        *param_1 = '-';
        local_b0 = param_1 + 1;
        lVar19 = *param_2;
        if (lVar19 != 0) {
          if (**(longlong **)(lVar19 + 0x38) == 0) {
LAB_1400d6aac:
            uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            iVar2 = **(int **)(lVar19 + 0x50);
            if (iVar2 < 1) goto LAB_1400d6aac;
            **(int **)(lVar19 + 0x50) = iVar2 + -1;
            pbVar3 = (byte *)**(longlong **)(lVar19 + 0x38);
            **(longlong **)(lVar19 + 0x38) = (longlong)(pbVar3 + 1);
            uVar6 = (uint)*pbVar3;
          }
          if (uVar6 != 0xffffffff) {
            *(undefined1 *)(param_2 + 1) = 0;
            cVar5 = '\0';
            goto LAB_1400d6acf;
          }
        }
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
        cVar5 = '\x01';
      }
    }
  }
  else if (*param_3 == 0) goto LAB_1400d699e;
LAB_1400d6acf:
  if (cVar13 != '\0') {
    lVar19 = *param_2;
LAB_1400d6ae0:
    if (cVar5 == '\0') {
      if (lVar19 == 0) {
LAB_1400d6b1a:
        *param_2 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_1400d6b1a;
        *(char *)((longlong)param_2 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      lVar19 = *param_3;
      if (lVar19 == 0) {
LAB_1400d6b62:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_1400d6b62;
        *(char *)((longlong)param_3 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar19 = *param_2;
    if (lVar19 == 0) {
      if (*param_3 == 0) goto LAB_1400d6b7a;
    }
    else if (*param_3 != 0) goto LAB_1400d6b7a;
    if ((char)param_2[1] == '\0') {
      if (lVar19 == 0) {
LAB_1400d6bd6:
        *param_2 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_1400d6bd6;
        *(char *)((longlong)param_2 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(char *)((longlong)param_2 + 9) != cVar13) goto LAB_1400d6b7a;
    lVar19 = *param_2;
    if (lVar19 == 0) {
LAB_1400d6c38:
      *param_2 = 0;
      cVar5 = '\x01';
      *(undefined1 *)(param_2 + 1) = 1;
      local_b7 = '\x01';
      lVar19 = 0;
    }
    else {
      if (**(longlong **)(lVar19 + 0x38) == 0) {
LAB_1400d6c15:
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        iVar2 = **(int **)(lVar19 + 0x50);
        if (iVar2 < 1) goto LAB_1400d6c15;
        **(int **)(lVar19 + 0x50) = iVar2 + -1;
        pbVar3 = (byte *)**(longlong **)(lVar19 + 0x38);
        **(longlong **)(lVar19 + 0x38) = (longlong)(pbVar3 + 1);
        uVar6 = (uint)*pbVar3;
      }
      if (uVar6 == 0xffffffff) goto LAB_1400d6c38;
      cVar5 = '\0';
      *(undefined1 *)(param_2 + 1) = 0;
      local_b7 = '\x01';
      lVar19 = *param_2;
    }
    goto LAB_1400d6ae0;
  }
LAB_1400d6b7a:
  if ((param_4 & 0xe00) == 0x400) {
    bVar12 = 8;
  }
  else if ((param_4 & 0xe00) == 0x800) {
    bVar12 = 0x10;
  }
  else {
    bVar12 = -((param_4 & 0xe00) != 0) & 10;
  }
  local_b4 = '\0';
  local_b8 = bVar12;
  if ((char)param_2[1] == '\0') {
    lVar19 = *param_2;
    if (lVar19 == 0) {
LAB_1400d6ca6:
      *param_2 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar19 + 0x50) < 1)) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_1400d6ca6;
      *(char *)((longlong)param_2 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    lVar19 = *param_3;
    if (lVar19 == 0) {
LAB_1400d6cee:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar19 + 0x50) < 1)) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_1400d6cee;
      *(char *)((longlong)param_3 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar19 = *param_2;
  if (lVar19 == 0) {
    if (*param_3 == 0) goto LAB_1400d6d06;
LAB_1400d6d39:
    if ((char)param_2[1] == '\0') {
      if (lVar19 == 0) {
LAB_1400d6d75:
        *param_2 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_1400d6d75;
        *(char *)((longlong)param_2 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(char *)((longlong)param_2 + 9) != local_60[0]) goto LAB_1400d6d06;
    lVar19 = *param_2;
    if (lVar19 == 0) {
LAB_1400d6e07:
      *param_2 = 0;
    }
    else {
      if (**(longlong **)(lVar19 + 0x38) == 0) {
LAB_1400d6db8:
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        iVar2 = **(int **)(lVar19 + 0x50);
        if (iVar2 < 1) goto LAB_1400d6db8;
        **(int **)(lVar19 + 0x50) = iVar2 + -1;
        pbVar3 = (byte *)**(longlong **)(lVar19 + 0x38);
        **(longlong **)(lVar19 + 0x38) = (longlong)(pbVar3 + 1);
        uVar6 = (uint)*pbVar3;
      }
      if (uVar6 == 0xffffffff) goto LAB_1400d6e07;
      *(undefined1 *)(param_2 + 1) = 0;
      lVar19 = *param_2;
      if (lVar19 == 0) goto LAB_1400d6e07;
      if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar19 + 0x50) < 1)) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_1400d6e07;
      *(char *)((longlong)param_2 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    if ((char)param_3[1] == '\0') {
      lVar19 = *param_3;
      if (lVar19 == 0) {
LAB_1400d6e4f:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_1400d6e4f;
        *(char *)((longlong)param_3 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar19 = *param_2;
    if (lVar19 != 0) {
      if (*param_3 == 0) goto LAB_1400d6e85;
LAB_1400d6e67:
      bVar17 = 1;
      local_b5 = '\x01';
      if (bVar12 == 0) {
        bVar12 = 8;
        local_b8 = 8;
        goto LAB_1400d6d1e;
      }
      goto LAB_1400d6d15;
    }
    if (*param_3 == 0) goto LAB_1400d6e67;
LAB_1400d6e85:
    cVar13 = (char)param_2[1];
    if (cVar13 == '\0') {
      if (lVar19 == 0) {
LAB_1400d6ec3:
        *param_2 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_1400d6ec3;
        *(char *)((longlong)param_2 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_2 + 1) = 1;
      cVar13 = '\x01';
    }
    if (*(byte *)((longlong)param_2 + 9) != local_47) {
      if (cVar13 == '\0') {
        lVar19 = *param_2;
        if (lVar19 != 0) {
          if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar19 + 0x50) < 1)) {
            uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
          }
          if (uVar6 != 0xffffffff) {
            *(char *)((longlong)param_2 + 9) = (char)uVar6;
            *(undefined1 *)(param_2 + 1) = 1;
            goto LAB_1400d6f26;
          }
        }
        *param_2 = 0;
        uVar6 = (uint)*(byte *)((longlong)param_2 + 9);
        *(undefined1 *)(param_2 + 1) = 1;
      }
      else {
        uVar6 = (uint)*(byte *)((longlong)param_2 + 9);
      }
LAB_1400d6f26:
      if ((char)uVar6 != local_48) goto LAB_1400d6e67;
    }
    if ((bVar12 & 0xef) != 0) goto LAB_1400d6e67;
    bVar12 = 0x10;
    local_b8 = 0x10;
    bVar17 = 0;
    local_b5 = '\0';
    lVar19 = *param_2;
    if (lVar19 == 0) {
LAB_1400d6f93:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar19 + 0x38) == 0) {
LAB_1400d6f77:
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        iVar2 = **(int **)(lVar19 + 0x50);
        if (iVar2 < 1) goto LAB_1400d6f77;
        **(int **)(lVar19 + 0x50) = iVar2 + -1;
        pbVar3 = (byte *)**(longlong **)(lVar19 + 0x38);
        **(longlong **)(lVar19 + 0x38) = (longlong)(pbVar3 + 1);
        uVar6 = (uint)*pbVar3;
      }
      if (uVar6 == 0xffffffff) goto LAB_1400d6f93;
      *(undefined1 *)(param_2 + 1) = 0;
    }
LAB_1400d6d1e:
    uVar18 = 0x16;
    if (bVar12 == 8) {
      uVar18 = 8;
    }
  }
  else {
    if (*param_3 == 0) goto LAB_1400d6d39;
LAB_1400d6d06:
    bVar17 = 0;
    local_b5 = '\0';
    if (bVar12 != 0) {
LAB_1400d6d15:
      if (bVar12 != 10) goto LAB_1400d6d1e;
    }
    uVar18 = 10;
  }
  cVar13 = local_b4;
  uStack_98 = 0;
  local_90 = 1;
  local_88 = 0xf;
  local_a0 = (char ***)(ulonglong)bVar17;
  lVar19 = 0;
  pcVar14 = local_a8 + 0x1f;
  local_a8 = pcVar14;
LAB_1400d6fe0:
  if ((char)param_2[1] == '\0') {
    lVar9 = *param_2;
    if (lVar9 == 0) {
LAB_1400d701f:
      *param_2 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar9 + 0x38) == (byte *)0x0) || (**(int **)(lVar9 + 0x50) < 1)
         ) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_1400d701f;
      *(char *)((longlong)param_2 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    lVar9 = *param_3;
    if (lVar9 == 0) {
LAB_1400d7067:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar9 + 0x38) == (byte *)0x0) || (**(int **)(lVar9 + 0x50) < 1)
         ) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_1400d7067;
      *(char *)((longlong)param_3 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar9 = *param_2;
  cVar5 = local_b6;
  if (lVar9 == 0) {
    if (*param_3 == 0) goto LAB_1400d708c;
  }
  else if (*param_3 != 0) goto LAB_1400d708c;
  if ((char)param_2[1] == '\0') {
    if (lVar9 == 0) {
LAB_1400d71af:
      *param_2 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar9 + 0x38) == (byte *)0x0) || (**(int **)(lVar9 + 0x50) < 1)
         ) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_1400d71af;
      *(char *)((longlong)param_2 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar9 = thunk_FUN_1400daaa0(local_60,local_46,*(undefined1 *)((longlong)param_2 + 9));
  cVar5 = local_b6;
  if ((ulonglong)(lVar9 - (longlong)local_60) < uVar18) {
    cVar5 = "0123456789ABCDEFabcdef-+Xx"[lVar9 - (longlong)local_60];
    *local_b0 = cVar5;
    if (((local_b4 != '\0') || (cVar5 != '0')) && (local_b0 < pcVar14)) {
      local_b0 = local_b0 + 1;
      local_b4 = '\x01';
    }
    local_b5 = '\x01';
    ppppcVar10 = &local_a0;
    if (0xf < local_88) {
      ppppcVar10 = (char ****)local_a0;
    }
    if (*(char *)((longlong)ppppcVar10 + lVar19) != '\x7f') {
      ppppcVar10 = &local_a0;
      if (0xf < local_88) {
        ppppcVar10 = (char ****)local_a0;
      }
      *(char *)((longlong)ppppcVar10 + lVar19) = *(char *)((longlong)ppppcVar10 + lVar19) + '\x01';
    }
  }
  else {
    if (local_b6 == '\0') goto LAB_1400d708c;
    if ((char)param_2[1] == '\0') {
      lVar9 = *param_2;
      if (lVar9 == 0) {
LAB_1400d7285:
        *param_2 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar9 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar9 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar9 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_1400d7285;
        *(char *)((longlong)param_2 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    uVar4 = local_90;
    if (*(char *)((longlong)param_2 + 9) != cVar5) goto LAB_1400d708c;
    ppppcVar10 = &local_a0;
    if (0xf < local_88) {
      ppppcVar10 = (char ****)local_a0;
    }
    if (*(char *)((longlong)ppppcVar10 + lVar19) == '\0') {
      local_b7 = '\x01';
    }
    else {
      if (local_90 < local_88) {
        uVar1 = local_90 + 1;
        if (((local_90 != uVar1) && (0xf < local_88)) && (DAT_140166098 != '\0')) {
          pcVar16 = (char *)((longlong)local_a0 + local_90 + 1);
          pcVar11 = (char *)((ulonglong)((longlong)local_a0 + local_88 + 8) & 0xfffffffffffffff8);
          pcVar14 = pcVar11;
          if (pcVar16 <= pcVar11) {
            pcVar14 = pcVar16;
          }
          _guard_check_icall(local_a0,pcVar11,pcVar14);
        }
        local_90 = uVar1;
        ppppcVar10 = &local_a0;
        if (0xf < local_88) {
          ppppcVar10 = (char ****)local_a0;
        }
        ((char *)((longlong)ppppcVar10 + uVar4))[0] = '\0';
        ((char *)((longlong)ppppcVar10 + uVar4))[1] = '\0';
      }
      else {
        FUN_1400d95a0(&local_a0,1,cVar13,0);
      }
      lVar19 = lVar19 + 1;
      pcVar14 = local_a8;
    }
  }
  lVar9 = *param_2;
  if (lVar9 == 0) {
LAB_1400d7399:
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar9 + 0x38) == 0) {
LAB_1400d737b:
      uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar2 = **(int **)(lVar9 + 0x50);
      if (iVar2 < 1) goto LAB_1400d737b;
      **(int **)(lVar9 + 0x50) = iVar2 + -1;
      pbVar3 = (byte *)**(longlong **)(lVar9 + 0x38);
      **(longlong **)(lVar9 + 0x38) = (longlong)(pbVar3 + 1);
      uVar6 = (uint)*pbVar3;
    }
    if (uVar6 == 0xffffffff) goto LAB_1400d7399;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  goto LAB_1400d6fe0;
LAB_1400d7435:
  pcVar14 = local_b0;
  if (local_b4 == '\0') {
    *local_b0 = '0';
    pcVar14 = local_b0 + 1;
  }
  *pcVar14 = '\0';
  goto LAB_1400d7461;
LAB_1400d708c:
  cVar13 = local_b7;
  if (lVar19 != 0) {
    ppppcVar10 = &local_a0;
    if (0xf < local_88) {
      ppppcVar10 = (char ****)local_a0;
    }
    if (*(char *)((longlong)ppppcVar10 + lVar19) < '\x01') {
      cVar13 = '\x01';
    }
    else {
      lVar19 = lVar19 + 1;
    }
  }
  if (cVar5 != '\0') {
LAB_1400d70b6:
    if ((char)param_2[1] == '\0') {
      FUN_1400d64e0(param_2);
    }
    if ((char)param_3[1] == '\0') {
      FUN_1400d64e0(param_3);
    }
    if (*param_2 == 0) {
      if (*param_3 == 0) goto LAB_1400d70e9;
    }
    else if (*param_3 != 0) goto LAB_1400d70e9;
    if ((char)param_2[1] == '\0') {
      FUN_1400d64e0(param_2);
    }
    if (*(char *)((longlong)param_2 + 9) != cVar5) goto LAB_1400d70e9;
    lVar9 = *param_2;
    if (lVar9 == 0) {
LAB_1400d7421:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      cVar13 = '\x01';
    }
    else {
      if (**(longlong **)(lVar9 + 0x38) == 0) {
LAB_1400d7403:
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        iVar2 = **(int **)(lVar9 + 0x50);
        if (iVar2 < 1) goto LAB_1400d7403;
        **(int **)(lVar9 + 0x50) = iVar2 + -1;
        pbVar3 = (byte *)**(longlong **)(lVar9 + 0x38);
        **(longlong **)(lVar9 + 0x38) = (longlong)(pbVar3 + 1);
        uVar6 = (uint)*pbVar3;
      }
      if (uVar6 == 0xffffffff) goto LAB_1400d7421;
      *(undefined1 *)(param_2 + 1) = 0;
      cVar13 = '\x01';
    }
    goto LAB_1400d70b6;
  }
LAB_1400d70e9:
  ppppcVar10 = local_80;
  if (0xf < local_68) {
    ppppcVar10 = (char ****)local_80[0];
  }
  ppppcVar15 = (char ****)((longlong)ppppcVar10 + local_70);
  cVar5 = '\0';
  if (local_b5 != '\0') {
LAB_1400d7110:
    do {
      if ((cVar13 != '\0') || (lVar19 == 0)) goto LAB_1400d7435;
      if (ppppcVar10 != ppppcVar15) {
        cVar5 = *(char *)ppppcVar10;
        ppppcVar10 = (char ****)((longlong)ppppcVar10 + 1);
      }
      lVar19 = lVar19 + -1;
    } while (0x7d < (byte)(cVar5 - 1U));
    if (lVar19 == 0) {
LAB_1400d7154:
      ppppcVar8 = &local_a0;
      if (0xf < local_88) {
        ppppcVar8 = (char ****)local_a0;
      }
      if (*(char *)ppppcVar8 <= cVar5) goto LAB_1400d7110;
    }
    else {
      ppppcVar8 = &local_a0;
      if (0xf < local_88) {
        ppppcVar8 = (char ****)local_a0;
      }
      if (*(char *)((longlong)ppppcVar8 + lVar19) == cVar5) {
        if (lVar19 == 0) goto LAB_1400d7154;
        goto LAB_1400d7110;
      }
    }
    cVar13 = '\x01';
    goto LAB_1400d7110;
  }
LAB_1400d7461:
  FUN_1400065bc(&local_a0);
  FUN_1400065bc(local_80);
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_40 ^ (ulonglong)auStack_e8);
}

