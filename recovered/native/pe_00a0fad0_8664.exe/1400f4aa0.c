/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400f4aa0 */

void FUN_1400f4aa0(char *param_1,longlong *param_2,longlong *param_3,uint param_4,undefined8 param_5
                  )

{
  ulonglong uVar1;
  int iVar2;
  short *psVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  undefined8 uVar7;
  char ****ppppcVar8;
  longlong lVar9;
  ulonglong uVar10;
  char ****ppppcVar11;
  char cVar12;
  char *pcVar13;
  byte bVar14;
  char cVar15;
  uint uVar16;
  char *pcVar17;
  char ****ppppcVar18;
  char *pcVar19;
  ulonglong uVar20;
  longlong lVar21;
  byte bVar22;
  undefined1 auStack_108 [48];
  byte local_d8;
  char local_d7;
  char local_d6;
  char local_d5;
  uint local_d4;
  char *local_d0;
  longlong local_c8;
  char *local_c0;
  char ***local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  char ***local_98 [2];
  longlong local_88;
  ulonglong local_80;
  short local_78 [22];
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_1401c9640 ^ (ulonglong)auStack_108;
  local_c0 = param_1;
  uVar7 = FUN_1400ecb10(param_5);
  (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar7,local_98);
  if (local_88 == 0) {
    uVar16 = 0;
  }
  else {
    uVar4 = (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar7);
    uVar16 = (uint)uVar4;
  }
  local_d4 = uVar16;
  uVar7 = FUN_1400e9630(param_5);
  (*(code *)PTR__guard_dispatch_icall_140178c20)
            (uVar7,"0123456789ABCDEFabcdef-+Xx",&DAT_140165743,local_78);
  local_d7 = '\0';
  sVar6 = (short)uVar16;
  if (sVar6 != 0) {
    lVar21 = *param_2;
LAB_1400f4b65:
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_1400f4ba2:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_1400f4ba2;
        *(short *)((longlong)param_2 + 10) = sVar5;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      lVar21 = *param_3;
      if (lVar21 == 0) {
LAB_1400f4bee:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_1400f4bee;
        *(short *)((longlong)param_3 + 10) = sVar5;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar21 = *param_2;
    if (lVar21 == 0) {
      if (*param_3 == 0) goto LAB_1400f4c09;
    }
    else if (*param_3 != 0) goto LAB_1400f4c09;
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_1400f4c8c:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_1400f4c8c;
        *(short *)((longlong)param_2 + 10) = sVar5;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(short *)((longlong)param_2 + 10) != sVar6) goto LAB_1400f4c09;
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_1400f4cf3:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      local_d7 = '\x01';
      lVar21 = 0;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_1400f4cd0:
        sVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_1400f4cd0;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar5 = *psVar3;
      }
      if (sVar5 == -1) goto LAB_1400f4cf3;
      *(undefined1 *)(param_2 + 1) = 0;
      local_d7 = '\x01';
      lVar21 = *param_2;
    }
    goto LAB_1400f4b65;
  }
LAB_1400f4c09:
  cVar15 = (char)param_2[1];
  local_d0 = param_1;
  if (cVar15 == '\0') {
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_1400f4d1e:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar5 == -1) goto LAB_1400f4d1e;
      *(short *)((longlong)param_2 + 10) = sVar5;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    cVar15 = '\x01';
  }
  if ((char)param_3[1] == '\0') {
    lVar21 = *param_3;
    if (lVar21 == 0) {
LAB_1400f4d6f:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar5 == -1) goto LAB_1400f4d6f;
      *(short *)((longlong)param_3 + 10) = sVar5;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    cVar15 = (char)param_2[1];
  }
  lVar21 = *param_2;
  if (lVar21 == 0) {
    if (*param_3 != 0) {
LAB_1400f4d95:
      if (cVar15 == '\0') {
        if (lVar21 != 0) {
          if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar21 + 0x50) < 1)) {
            sVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
          }
          if (sVar5 != -1) {
            *(short *)((longlong)param_2 + 10) = sVar5;
            *(undefined1 *)(param_2 + 1) = 1;
            cVar15 = '\x01';
            goto LAB_1400f4df1;
          }
        }
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
        cVar15 = '\x01';
      }
LAB_1400f4df1:
      if (*(short *)((longlong)param_2 + 10) == local_4a) {
        *param_1 = '+';
        local_d0 = param_1 + 1;
        lVar21 = *param_2;
        if (lVar21 != 0) {
          if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_1400f4e3a:
            sVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            iVar2 = **(int **)(lVar21 + 0x50);
            if (iVar2 < 1) goto LAB_1400f4e3a;
            **(int **)(lVar21 + 0x50) = iVar2 + -1;
            psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
            **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
            sVar5 = *psVar3;
          }
          if (sVar5 != -1) {
            cVar15 = '\0';
            *(undefined1 *)(param_2 + 1) = 0;
            goto LAB_1400f4ec5;
          }
        }
        *param_2 = 0;
        cVar15 = '\x01';
        *(undefined1 *)(param_2 + 1) = 1;
      }
      else {
        if (*(short *)((longlong)param_2 + 10) != local_4c) goto LAB_1400f4ec5;
        *param_1 = '-';
        local_d0 = param_1 + 1;
        lVar21 = *param_2;
        if (lVar21 != 0) {
          if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_1400f4ea2:
            sVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            iVar2 = **(int **)(lVar21 + 0x50);
            if (iVar2 < 1) goto LAB_1400f4ea2;
            **(int **)(lVar21 + 0x50) = iVar2 + -1;
            psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
            **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
            sVar5 = *psVar3;
          }
          if (sVar5 != -1) {
            *(undefined1 *)(param_2 + 1) = 0;
            cVar15 = '\0';
            goto LAB_1400f4ec5;
          }
        }
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
        cVar15 = '\x01';
      }
    }
  }
  else if (*param_3 == 0) goto LAB_1400f4d95;
LAB_1400f4ec5:
  if (sVar6 != 0) {
    lVar21 = *param_2;
LAB_1400f4ed1:
    if (cVar15 == '\0') {
      if (lVar21 == 0) {
LAB_1400f4f0c:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_1400f4f0c;
        *(short *)((longlong)param_2 + 10) = sVar5;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      lVar21 = *param_3;
      if (lVar21 == 0) {
LAB_1400f4f58:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_1400f4f58;
        *(short *)((longlong)param_3 + 10) = sVar5;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar21 = *param_2;
    if (lVar21 == 0) {
      if (*param_3 == 0) goto LAB_1400f4f73;
    }
    else if (*param_3 != 0) goto LAB_1400f4f73;
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_1400f4fd0:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_1400f4fd0;
        *(short *)((longlong)param_2 + 10) = sVar5;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(short *)((longlong)param_2 + 10) != sVar6) goto LAB_1400f4f73;
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_1400f5033:
      *param_2 = 0;
      cVar15 = '\x01';
      *(undefined1 *)(param_2 + 1) = 1;
      local_d7 = '\x01';
      lVar21 = 0;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_1400f5010:
        sVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_1400f5010;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar5 = *psVar3;
      }
      if (sVar5 == -1) goto LAB_1400f5033;
      cVar15 = '\0';
      *(undefined1 *)(param_2 + 1) = 0;
      local_d7 = '\x01';
      lVar21 = *param_2;
    }
    goto LAB_1400f4ed1;
  }
LAB_1400f4f73:
  if ((param_4 & 0xe00) == 0x400) {
    bVar14 = 8;
  }
  else if ((param_4 & 0xe00) == 0x800) {
    bVar14 = 0x10;
  }
  else {
    bVar14 = -((param_4 & 0xe00) != 0) & 10;
  }
  local_d5 = '\0';
  local_d8 = bVar14;
  if ((char)param_2[1] == '\0') {
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_1400f50a3:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1400f50a3;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    lVar21 = *param_3;
    if (lVar21 == 0) {
LAB_1400f50ef:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1400f50ef;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar21 = *param_2;
  if (lVar21 == 0) {
    if (*param_3 == 0) goto LAB_1400f510a;
LAB_1400f513d:
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_1400f517a:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar6 == -1) goto LAB_1400f517a;
        *(short *)((longlong)param_2 + 10) = sVar6;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(short *)((longlong)param_2 + 10) != local_78[0]) goto LAB_1400f510a;
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_1400f5212:
      *param_2 = 0;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_1400f51c2:
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_1400f51c2;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar6 = *psVar3;
      }
      if (sVar6 == -1) goto LAB_1400f5212;
      *(undefined1 *)(param_2 + 1) = 0;
      lVar21 = *param_2;
      if (lVar21 == 0) goto LAB_1400f5212;
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1400f5212;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    if ((char)param_3[1] == '\0') {
      lVar21 = *param_3;
      if (lVar21 == 0) {
LAB_1400f525e:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar6 == -1) goto LAB_1400f525e;
        *(short *)((longlong)param_3 + 10) = sVar6;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar21 = *param_2;
    if (lVar21 != 0) {
      if (*param_3 == 0) goto LAB_1400f5298;
LAB_1400f5279:
      bVar22 = 1;
      local_d6 = '\x01';
      if (bVar14 == 0) {
        bVar14 = 8;
        local_d8 = 8;
        goto LAB_1400f5122;
      }
      goto LAB_1400f5119;
    }
    if (*param_3 == 0) goto LAB_1400f5279;
LAB_1400f5298:
    cVar15 = (char)param_2[1];
    if (cVar15 == '\0') {
      if (lVar21 == 0) {
LAB_1400f52d7:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar6 == -1) goto LAB_1400f52d7;
        *(short *)((longlong)param_2 + 10) = sVar6;
      }
      *(undefined1 *)(param_2 + 1) = 1;
      cVar15 = '\x01';
    }
    sVar6 = *(short *)((longlong)param_2 + 10);
    if (sVar6 != local_46) {
      if (cVar15 == '\0') {
        lVar21 = *param_2;
        if (lVar21 == 0) {
LAB_1400f5328:
          *param_2 = 0;
          sVar6 = *(short *)((longlong)param_2 + 10);
        }
        else {
          if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar21 + 0x50) < 1)) {
            sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
          }
          if (sVar6 == -1) goto LAB_1400f5328;
          *(short *)((longlong)param_2 + 10) = sVar6;
        }
        *(undefined1 *)(param_2 + 1) = 1;
      }
      if (sVar6 != local_48) goto LAB_1400f5279;
    }
    if ((bVar14 & 0xef) != 0) goto LAB_1400f5279;
    bVar14 = 0x10;
    local_d8 = 0x10;
    bVar22 = 0;
    local_d6 = '\0';
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_1400f53a2:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_1400f5386:
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_1400f5386;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar6 = *psVar3;
      }
      if (sVar6 == -1) goto LAB_1400f53a2;
      *(undefined1 *)(param_2 + 1) = 0;
    }
LAB_1400f5122:
    uVar20 = 0x16;
    if (bVar14 == 8) {
      uVar20 = 8;
    }
  }
  else {
    if (*param_3 == 0) goto LAB_1400f513d;
LAB_1400f510a:
    bVar22 = 0;
    local_d6 = '\0';
    if (bVar14 != 0) {
LAB_1400f5119:
      if (bVar14 != 10) goto LAB_1400f5122;
    }
    uVar20 = 10;
  }
  cVar15 = local_d5;
  uStack_b0 = 0;
  local_a8 = 1;
  local_a0 = 0xf;
  local_b8 = (char ***)(ulonglong)bVar22;
  lVar21 = 0;
  pcVar17 = local_c0 + 0x1f;
  local_c0 = pcVar17;
LAB_1400f53f0:
  if ((char)param_2[1] == '\0') {
    lVar9 = *param_2;
    if (lVar9 == 0) {
LAB_1400f5435:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar9 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar9 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1400f5435;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    lVar9 = *param_3;
    if (lVar9 == 0) {
LAB_1400f5486:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar9 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar9 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1400f5486;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar9 = *param_2;
  uVar16 = local_d4;
  if (lVar9 == 0) {
    if (*param_3 == 0) goto LAB_1400f54ad;
  }
  else if (*param_3 != 0) goto LAB_1400f54ad;
  if ((char)param_2[1] == '\0') {
    if (lVar9 == 0) {
LAB_1400f55e5:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar9 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar9 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1400f55e5;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar9 = thunk_FUN_1400dabb0(local_78,local_44,*(undefined2 *)((longlong)param_2 + 10));
  uVar16 = local_d4;
  uVar10 = lVar9 - (longlong)local_78 >> 1;
  if (uVar10 < uVar20) {
    cVar12 = "0123456789ABCDEFabcdef-+Xx"[uVar10];
    *local_d0 = cVar12;
    if (((local_d5 != '\0') || (cVar12 != '0')) && (local_d0 < pcVar17)) {
      local_d0 = local_d0 + 1;
      local_d5 = '\x01';
    }
    local_d6 = '\x01';
    ppppcVar11 = &local_b8;
    if (0xf < local_a0) {
      ppppcVar11 = (char ****)local_b8;
    }
    if (*(char *)((longlong)ppppcVar11 + lVar21) != '\x7f') {
      ppppcVar11 = &local_b8;
      if (0xf < local_a0) {
        ppppcVar11 = (char ****)local_b8;
      }
      *(char *)((longlong)ppppcVar11 + lVar21) = *(char *)((longlong)ppppcVar11 + lVar21) + '\x01';
    }
  }
  else {
    sVar6 = (short)local_d4;
    if (sVar6 == 0) goto LAB_1400f54ad;
    if ((char)param_2[1] == '\0') {
      lVar9 = *param_2;
      if (lVar9 == 0) {
LAB_1400f56c4:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar9 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar9 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar9 + 0x38);
        }
        if (sVar5 == -1) goto LAB_1400f56c4;
        *(short *)((longlong)param_2 + 10) = sVar5;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    uVar10 = local_a8;
    if (*(short *)((longlong)param_2 + 10) != sVar6) goto LAB_1400f54ad;
    ppppcVar11 = &local_b8;
    if (0xf < local_a0) {
      ppppcVar11 = (char ****)local_b8;
    }
    if (*(char *)((longlong)ppppcVar11 + lVar21) == '\0') {
      local_d7 = '\x01';
    }
    else {
      if (local_a8 < local_a0) {
        uVar1 = local_a8 + 1;
        if (((local_a8 != uVar1) && (0xf < local_a0)) && (DAT_140166098 != '\0')) {
          pcVar19 = (char *)((longlong)local_b8 + local_a8 + 1);
          pcVar13 = (char *)((ulonglong)((longlong)local_b8 + local_a0 + 8) & 0xfffffffffffffff8);
          pcVar17 = pcVar13;
          if (pcVar19 <= pcVar13) {
            pcVar17 = pcVar19;
          }
          _guard_check_icall(local_b8,pcVar13,pcVar17);
        }
        local_a8 = uVar1;
        ppppcVar11 = &local_b8;
        if (0xf < local_a0) {
          ppppcVar11 = (char ****)local_b8;
        }
        ((char *)((longlong)ppppcVar11 + uVar10))[0] = '\0';
        ((char *)((longlong)ppppcVar11 + uVar10))[1] = '\0';
      }
      else {
        FUN_1400d95a0(&local_b8,1,cVar15,0);
      }
      lVar21 = lVar21 + 1;
      pcVar17 = local_c0;
    }
  }
  lVar9 = *param_2;
  if (lVar9 == 0) {
LAB_1400f57de:
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar9 + 0x38) == 0) {
LAB_1400f57bb:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar2 = **(int **)(lVar9 + 0x50);
      if (iVar2 < 1) goto LAB_1400f57bb;
      **(int **)(lVar9 + 0x50) = iVar2 + -1;
      psVar3 = (short *)**(longlong **)(lVar9 + 0x38);
      **(longlong **)(lVar9 + 0x38) = (longlong)(psVar3 + 1);
      sVar6 = *psVar3;
    }
    if (sVar6 == -1) goto LAB_1400f57de;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  goto LAB_1400f53f0;
LAB_1400f587c:
  pcVar17 = local_d0;
  if (local_d5 == '\0') {
    *local_d0 = '0';
    pcVar17 = local_d0 + 1;
  }
  *pcVar17 = '\0';
  goto LAB_1400f58aa;
LAB_1400f54ad:
  cVar15 = local_d7;
  local_c8 = lVar21;
  if (lVar21 != 0) {
    ppppcVar11 = &local_b8;
    if (0xf < local_a0) {
      ppppcVar11 = (char ****)local_b8;
    }
    if (*(char *)((longlong)ppppcVar11 + lVar21) < '\x01') {
      cVar15 = '\x01';
    }
    else {
      local_c8 = lVar21 + 1;
    }
  }
  if ((short)uVar16 != 0) {
LAB_1400f54e6:
    if ((char)param_2[1] == '\0') {
      FUN_1400e3870(param_2);
    }
    if ((char)param_3[1] == '\0') {
      FUN_1400e3870(param_3);
    }
    if (*param_2 == 0) {
      if (*param_3 == 0) goto LAB_1400f551f;
    }
    else if (*param_3 != 0) goto LAB_1400f551f;
    if ((char)param_2[1] == '\0') {
      FUN_1400e3870(param_2);
    }
    if (*(short *)((longlong)param_2 + 10) != (short)uVar16) goto LAB_1400f551f;
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_1400f5868:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      cVar15 = '\x01';
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_1400f5849:
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_1400f5849;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar6 = *psVar3;
      }
      if (sVar6 == -1) goto LAB_1400f5868;
      *(undefined1 *)(param_2 + 1) = 0;
      cVar15 = '\x01';
    }
    goto LAB_1400f54e6;
  }
LAB_1400f551f:
  ppppcVar11 = local_98;
  if (0xf < local_80) {
    ppppcVar11 = (char ****)local_98[0];
  }
  ppppcVar18 = (char ****)((longlong)ppppcVar11 + local_88);
  cVar12 = '\0';
  lVar21 = local_c8;
  if (local_d6 != '\0') {
LAB_1400f5540:
    do {
      if ((cVar15 != '\0') || (lVar21 == 0)) goto LAB_1400f587c;
      if (ppppcVar11 != ppppcVar18) {
        cVar12 = *(char *)ppppcVar11;
        ppppcVar11 = (char ****)((longlong)ppppcVar11 + 1);
      }
      lVar21 = lVar21 + -1;
    } while (0x7d < (byte)(cVar12 - 1U));
    if (lVar21 == 0) {
LAB_1400f5584:
      ppppcVar8 = &local_b8;
      if (0xf < local_a0) {
        ppppcVar8 = (char ****)local_b8;
      }
      if (*(char *)ppppcVar8 <= cVar12) goto LAB_1400f5540;
    }
    else {
      ppppcVar8 = &local_b8;
      if (0xf < local_a0) {
        ppppcVar8 = (char ****)local_b8;
      }
      if (*(char *)((longlong)ppppcVar8 + lVar21) == cVar12) {
        if (lVar21 == 0) goto LAB_1400f5584;
        goto LAB_1400f5540;
      }
    }
    cVar15 = '\x01';
    goto LAB_1400f5540;
  }
LAB_1400f58aa:
  FUN_1400017de(&local_b8);
  FUN_1400017de(local_98);
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_40 ^ (ulonglong)auStack_108);
}

