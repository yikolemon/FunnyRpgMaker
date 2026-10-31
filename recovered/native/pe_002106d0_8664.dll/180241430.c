/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180241430 */

void FUN_180241430(char *param_1,longlong *param_2,longlong *param_3,uint param_4,undefined8 param_5
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
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_e8;
  local_a8 = param_1;
  uVar7 = FUN_18000b3c1(param_5);
  (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar7,local_80);
  if (local_70 == 0) {
    cVar13 = '\0';
  }
  else {
    cVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar7);
  }
  local_b6 = cVar13;
  uVar7 = FUN_18001c0ec(param_5);
  (*(code *)PTR__guard_dispatch_icall_18038bc80)
            (uVar7,"0123456789ABCDEFabcdef-+Xx",&DAT_1802dd12b,local_60);
  local_b7 = '\0';
  if (cVar13 != '\0') {
    lVar19 = *param_2;
LAB_1802414f0:
    if ((char)param_2[1] == '\0') {
      if (lVar19 == 0) {
LAB_18024152c:
        *param_2 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_18024152c;
        *(char *)((longlong)param_2 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      lVar19 = *param_3;
      if (lVar19 == 0) {
LAB_180241574:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_180241574;
        *(char *)((longlong)param_3 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar19 = *param_2;
    if (lVar19 == 0) {
      if (*param_3 == 0) goto LAB_18024158c;
    }
    else if (*param_3 != 0) goto LAB_18024158c;
    if ((char)param_2[1] == '\0') {
      if (lVar19 == 0) {
LAB_18024160e:
        *param_2 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_18024160e;
        *(char *)((longlong)param_2 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(char *)((longlong)param_2 + 9) != cVar13) goto LAB_18024158c;
    lVar19 = *param_2;
    if (lVar19 == 0) {
LAB_180241674:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      local_b7 = '\x01';
      lVar19 = 0;
    }
    else {
      if (**(longlong **)(lVar19 + 0x38) == 0) {
LAB_180241651:
        uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar2 = **(int **)(lVar19 + 0x50);
        if (iVar2 < 1) goto LAB_180241651;
        **(int **)(lVar19 + 0x50) = iVar2 + -1;
        pbVar3 = (byte *)**(longlong **)(lVar19 + 0x38);
        **(longlong **)(lVar19 + 0x38) = (longlong)(pbVar3 + 1);
        uVar6 = (uint)*pbVar3;
      }
      if (uVar6 == 0xffffffff) goto LAB_180241674;
      *(undefined1 *)(param_2 + 1) = 0;
      local_b7 = '\x01';
      lVar19 = *param_2;
    }
    goto LAB_1802414f0;
  }
LAB_18024158c:
  cVar5 = (char)param_2[1];
  local_b0 = param_1;
  if (cVar5 == '\0') {
    lVar19 = *param_2;
    if (lVar19 == 0) {
LAB_18024169e:
      *param_2 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar19 + 0x50) < 1)) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_18024169e;
      *(char *)((longlong)param_2 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    cVar5 = '\x01';
  }
  if ((char)param_3[1] == '\0') {
    lVar19 = *param_3;
    if (lVar19 == 0) {
LAB_1802416eb:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar19 + 0x50) < 1)) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_1802416eb;
      *(char *)((longlong)param_3 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    cVar5 = (char)param_2[1];
  }
  lVar19 = *param_2;
  if (lVar19 == 0) {
    if (*param_3 != 0) {
LAB_18024170e:
      if (cVar5 == '\0') {
        if (lVar19 != 0) {
          if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar19 + 0x50) < 1)) {
            uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
          }
          if (uVar6 != 0xffffffff) {
            *(char *)((longlong)param_2 + 9) = (char)uVar6;
            *(undefined1 *)(param_2 + 1) = 1;
            cVar5 = '\x01';
            goto LAB_180241769;
          }
        }
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
        cVar5 = '\x01';
      }
LAB_180241769:
      if (*(char *)((longlong)param_2 + 9) == local_49) {
        *param_1 = '+';
        local_b0 = param_1 + 1;
        lVar19 = *param_2;
        if (lVar19 != 0) {
          if (**(longlong **)(lVar19 + 0x38) == 0) {
LAB_1802417b3:
            uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            iVar2 = **(int **)(lVar19 + 0x50);
            if (iVar2 < 1) goto LAB_1802417b3;
            **(int **)(lVar19 + 0x50) = iVar2 + -1;
            pbVar3 = (byte *)**(longlong **)(lVar19 + 0x38);
            **(longlong **)(lVar19 + 0x38) = (longlong)(pbVar3 + 1);
            uVar6 = (uint)*pbVar3;
          }
          if (uVar6 != 0xffffffff) {
            cVar5 = '\0';
            *(undefined1 *)(param_2 + 1) = 0;
            goto LAB_18024183f;
          }
        }
        *param_2 = 0;
        cVar5 = '\x01';
        *(undefined1 *)(param_2 + 1) = 1;
      }
      else {
        if (*(char *)((longlong)param_2 + 9) != local_4a) goto LAB_18024183f;
        *param_1 = '-';
        local_b0 = param_1 + 1;
        lVar19 = *param_2;
        if (lVar19 != 0) {
          if (**(longlong **)(lVar19 + 0x38) == 0) {
LAB_18024181c:
            uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            iVar2 = **(int **)(lVar19 + 0x50);
            if (iVar2 < 1) goto LAB_18024181c;
            **(int **)(lVar19 + 0x50) = iVar2 + -1;
            pbVar3 = (byte *)**(longlong **)(lVar19 + 0x38);
            **(longlong **)(lVar19 + 0x38) = (longlong)(pbVar3 + 1);
            uVar6 = (uint)*pbVar3;
          }
          if (uVar6 != 0xffffffff) {
            *(undefined1 *)(param_2 + 1) = 0;
            cVar5 = '\0';
            goto LAB_18024183f;
          }
        }
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
        cVar5 = '\x01';
      }
    }
  }
  else if (*param_3 == 0) goto LAB_18024170e;
LAB_18024183f:
  if (cVar13 != '\0') {
    lVar19 = *param_2;
LAB_180241850:
    if (cVar5 == '\0') {
      if (lVar19 == 0) {
LAB_18024188a:
        *param_2 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_18024188a;
        *(char *)((longlong)param_2 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      lVar19 = *param_3;
      if (lVar19 == 0) {
LAB_1802418d2:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_1802418d2;
        *(char *)((longlong)param_3 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar19 = *param_2;
    if (lVar19 == 0) {
      if (*param_3 == 0) goto LAB_1802418ea;
    }
    else if (*param_3 != 0) goto LAB_1802418ea;
    if ((char)param_2[1] == '\0') {
      if (lVar19 == 0) {
LAB_180241946:
        *param_2 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_180241946;
        *(char *)((longlong)param_2 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(char *)((longlong)param_2 + 9) != cVar13) goto LAB_1802418ea;
    lVar19 = *param_2;
    if (lVar19 == 0) {
LAB_1802419a8:
      *param_2 = 0;
      cVar5 = '\x01';
      *(undefined1 *)(param_2 + 1) = 1;
      local_b7 = '\x01';
      lVar19 = 0;
    }
    else {
      if (**(longlong **)(lVar19 + 0x38) == 0) {
LAB_180241985:
        uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar2 = **(int **)(lVar19 + 0x50);
        if (iVar2 < 1) goto LAB_180241985;
        **(int **)(lVar19 + 0x50) = iVar2 + -1;
        pbVar3 = (byte *)**(longlong **)(lVar19 + 0x38);
        **(longlong **)(lVar19 + 0x38) = (longlong)(pbVar3 + 1);
        uVar6 = (uint)*pbVar3;
      }
      if (uVar6 == 0xffffffff) goto LAB_1802419a8;
      cVar5 = '\0';
      *(undefined1 *)(param_2 + 1) = 0;
      local_b7 = '\x01';
      lVar19 = *param_2;
    }
    goto LAB_180241850;
  }
LAB_1802418ea:
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
LAB_180241a16:
      *param_2 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar19 + 0x50) < 1)) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_180241a16;
      *(char *)((longlong)param_2 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    lVar19 = *param_3;
    if (lVar19 == 0) {
LAB_180241a5e:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar19 + 0x50) < 1)) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_180241a5e;
      *(char *)((longlong)param_3 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar19 = *param_2;
  if (lVar19 == 0) {
    if (*param_3 == 0) goto LAB_180241a76;
LAB_180241aa9:
    if ((char)param_2[1] == '\0') {
      if (lVar19 == 0) {
LAB_180241ae5:
        *param_2 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_180241ae5;
        *(char *)((longlong)param_2 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(char *)((longlong)param_2 + 9) != local_60[0]) goto LAB_180241a76;
    lVar19 = *param_2;
    if (lVar19 == 0) {
LAB_180241b77:
      *param_2 = 0;
    }
    else {
      if (**(longlong **)(lVar19 + 0x38) == 0) {
LAB_180241b28:
        uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar2 = **(int **)(lVar19 + 0x50);
        if (iVar2 < 1) goto LAB_180241b28;
        **(int **)(lVar19 + 0x50) = iVar2 + -1;
        pbVar3 = (byte *)**(longlong **)(lVar19 + 0x38);
        **(longlong **)(lVar19 + 0x38) = (longlong)(pbVar3 + 1);
        uVar6 = (uint)*pbVar3;
      }
      if (uVar6 == 0xffffffff) goto LAB_180241b77;
      *(undefined1 *)(param_2 + 1) = 0;
      lVar19 = *param_2;
      if (lVar19 == 0) goto LAB_180241b77;
      if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar19 + 0x50) < 1)) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_180241b77;
      *(char *)((longlong)param_2 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    if ((char)param_3[1] == '\0') {
      lVar19 = *param_3;
      if (lVar19 == 0) {
LAB_180241bbf:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_180241bbf;
        *(char *)((longlong)param_3 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar19 = *param_2;
    if (lVar19 != 0) {
      if (*param_3 == 0) goto LAB_180241bf5;
LAB_180241bd7:
      bVar17 = 1;
      local_b5 = '\x01';
      if (bVar12 == 0) {
        bVar12 = 8;
        local_b8 = 8;
        goto LAB_180241a8e;
      }
      goto LAB_180241a85;
    }
    if (*param_3 == 0) goto LAB_180241bd7;
LAB_180241bf5:
    cVar13 = (char)param_2[1];
    if (cVar13 == '\0') {
      if (lVar19 == 0) {
LAB_180241c33:
        *param_2 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar19 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar19 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_180241c33;
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
            uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            uVar6 = (uint)*(byte *)**(undefined8 **)(lVar19 + 0x38);
          }
          if (uVar6 != 0xffffffff) {
            *(char *)((longlong)param_2 + 9) = (char)uVar6;
            *(undefined1 *)(param_2 + 1) = 1;
            goto LAB_180241c96;
          }
        }
        *param_2 = 0;
        uVar6 = (uint)*(byte *)((longlong)param_2 + 9);
        *(undefined1 *)(param_2 + 1) = 1;
      }
      else {
        uVar6 = (uint)*(byte *)((longlong)param_2 + 9);
      }
LAB_180241c96:
      if ((char)uVar6 != local_48) goto LAB_180241bd7;
    }
    if ((bVar12 & 0xef) != 0) goto LAB_180241bd7;
    bVar12 = 0x10;
    local_b8 = 0x10;
    bVar17 = 0;
    local_b5 = '\0';
    lVar19 = *param_2;
    if (lVar19 == 0) {
LAB_180241d03:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar19 + 0x38) == 0) {
LAB_180241ce7:
        uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar2 = **(int **)(lVar19 + 0x50);
        if (iVar2 < 1) goto LAB_180241ce7;
        **(int **)(lVar19 + 0x50) = iVar2 + -1;
        pbVar3 = (byte *)**(longlong **)(lVar19 + 0x38);
        **(longlong **)(lVar19 + 0x38) = (longlong)(pbVar3 + 1);
        uVar6 = (uint)*pbVar3;
      }
      if (uVar6 == 0xffffffff) goto LAB_180241d03;
      *(undefined1 *)(param_2 + 1) = 0;
    }
LAB_180241a8e:
    uVar18 = 0x16;
    if (bVar12 == 8) {
      uVar18 = 8;
    }
  }
  else {
    if (*param_3 == 0) goto LAB_180241aa9;
LAB_180241a76:
    bVar17 = 0;
    local_b5 = '\0';
    if (bVar12 != 0) {
LAB_180241a85:
      if (bVar12 != 10) goto LAB_180241a8e;
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
LAB_180241d50:
  if ((char)param_2[1] == '\0') {
    lVar9 = *param_2;
    if (lVar9 == 0) {
LAB_180241d8f:
      *param_2 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar9 + 0x38) == (byte *)0x0) || (**(int **)(lVar9 + 0x50) < 1)
         ) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_180241d8f;
      *(char *)((longlong)param_2 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    lVar9 = *param_3;
    if (lVar9 == 0) {
LAB_180241dd7:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar9 + 0x38) == (byte *)0x0) || (**(int **)(lVar9 + 0x50) < 1)
         ) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_180241dd7;
      *(char *)((longlong)param_3 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar9 = *param_2;
  cVar5 = local_b6;
  if (lVar9 == 0) {
    if (*param_3 == 0) goto LAB_180241dfc;
  }
  else if (*param_3 != 0) goto LAB_180241dfc;
  if ((char)param_2[1] == '\0') {
    if (lVar9 == 0) {
LAB_180241f1f:
      *param_2 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar9 + 0x38) == (byte *)0x0) || (**(int **)(lVar9 + 0x50) < 1)
         ) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_180241f1f;
      *(char *)((longlong)param_2 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar9 = thunk_FUN_18023aef0(local_60,local_46,*(undefined1 *)((longlong)param_2 + 9));
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
    if (local_b6 == '\0') goto LAB_180241dfc;
    if ((char)param_2[1] == '\0') {
      lVar9 = *param_2;
      if (lVar9 == 0) {
LAB_180241ff5:
        *param_2 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar9 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar9 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar9 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_180241ff5;
        *(char *)((longlong)param_2 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    uVar4 = local_90;
    if (*(char *)((longlong)param_2 + 9) != cVar5) goto LAB_180241dfc;
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
        if (((local_90 != uVar1) && (0xf < local_88)) && (DAT_18034e408 != '\0')) {
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
        FUN_1802442b0(&local_a0,1,cVar13,0);
      }
      lVar19 = lVar19 + 1;
      pcVar14 = local_a8;
    }
  }
  lVar9 = *param_2;
  if (lVar9 == 0) {
LAB_180242109:
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar9 + 0x38) == 0) {
LAB_1802420eb:
      uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar2 = **(int **)(lVar9 + 0x50);
      if (iVar2 < 1) goto LAB_1802420eb;
      **(int **)(lVar9 + 0x50) = iVar2 + -1;
      pbVar3 = (byte *)**(longlong **)(lVar9 + 0x38);
      **(longlong **)(lVar9 + 0x38) = (longlong)(pbVar3 + 1);
      uVar6 = (uint)*pbVar3;
    }
    if (uVar6 == 0xffffffff) goto LAB_180242109;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  goto LAB_180241d50;
LAB_1802421a5:
  pcVar14 = local_b0;
  if (local_b4 == '\0') {
    *local_b0 = '0';
    pcVar14 = local_b0 + 1;
  }
  *pcVar14 = '\0';
  goto LAB_1802421d1;
LAB_180241dfc:
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
LAB_180241e26:
    if ((char)param_2[1] == '\0') {
      FUN_1800e5e14(param_2);
    }
    if ((char)param_3[1] == '\0') {
      FUN_1800e5e14(param_3);
    }
    if (*param_2 == 0) {
      if (*param_3 == 0) goto LAB_180241e59;
    }
    else if (*param_3 != 0) goto LAB_180241e59;
    if ((char)param_2[1] == '\0') {
      FUN_1800e5e14(param_2);
    }
    if (*(char *)((longlong)param_2 + 9) != cVar5) goto LAB_180241e59;
    lVar9 = *param_2;
    if (lVar9 == 0) {
LAB_180242191:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      cVar13 = '\x01';
    }
    else {
      if (**(longlong **)(lVar9 + 0x38) == 0) {
LAB_180242173:
        uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar2 = **(int **)(lVar9 + 0x50);
        if (iVar2 < 1) goto LAB_180242173;
        **(int **)(lVar9 + 0x50) = iVar2 + -1;
        pbVar3 = (byte *)**(longlong **)(lVar9 + 0x38);
        **(longlong **)(lVar9 + 0x38) = (longlong)(pbVar3 + 1);
        uVar6 = (uint)*pbVar3;
      }
      if (uVar6 == 0xffffffff) goto LAB_180242191;
      *(undefined1 *)(param_2 + 1) = 0;
      cVar13 = '\x01';
    }
    goto LAB_180241e26;
  }
LAB_180241e59:
  ppppcVar10 = local_80;
  if (0xf < local_68) {
    ppppcVar10 = (char ****)local_80[0];
  }
  ppppcVar15 = (char ****)((longlong)ppppcVar10 + local_70);
  cVar5 = '\0';
  if (local_b5 != '\0') {
LAB_180241e80:
    do {
      if ((cVar13 != '\0') || (lVar19 == 0)) goto LAB_1802421a5;
      if (ppppcVar10 != ppppcVar15) {
        cVar5 = *(char *)ppppcVar10;
        ppppcVar10 = (char ****)((longlong)ppppcVar10 + 1);
      }
      lVar19 = lVar19 + -1;
    } while (0x7d < (byte)(cVar5 - 1U));
    if (lVar19 == 0) {
LAB_180241ec4:
      ppppcVar8 = &local_a0;
      if (0xf < local_88) {
        ppppcVar8 = (char ****)local_a0;
      }
      if (*(char *)ppppcVar8 <= cVar5) goto LAB_180241e80;
    }
    else {
      ppppcVar8 = &local_a0;
      if (0xf < local_88) {
        ppppcVar8 = (char ****)local_a0;
      }
      if (*(char *)((longlong)ppppcVar8 + lVar19) == cVar5) {
        if (lVar19 == 0) goto LAB_180241ec4;
        goto LAB_180241e80;
      }
    }
    cVar13 = '\x01';
    goto LAB_180241e80;
  }
LAB_1802421d1:
  FUN_180004c8c(&local_a0);
  FUN_180004c8c(local_80);
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_e8);
}

