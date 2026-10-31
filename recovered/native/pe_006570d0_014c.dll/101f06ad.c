/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f06ad */

int __fastcall FUN_101f06ad(int param_1)

{
  char *_Str2;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  char *local_184;
  int local_180 [20];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_11c;
  int local_108;
  int local_104;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_d0;
  undefined4 local_b4;
  int local_a8;
  undefined8 local_a0;
  undefined4 local_54;
  undefined4 local_50;
  int local_44;
  undefined8 local_3c;
  undefined4 local_20;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_194;
  uVar2 = *(undefined4 *)(param_1 + 0x1ec);
  FUN_101f0c13();
  *(undefined4 *)(param_1 + 0x218) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x21c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x118) = 7;
  *(undefined4 *)(param_1 + 0x11c) = 1;
  *(undefined4 *)(param_1 + 0xac) = 4;
  *(undefined4 *)(param_1 + 0x15c) = 0xf5c;
  *(undefined4 *)(param_1 + 0x114) = 0x27a000;
  local_180[0] = FUN_101f0c24(*(undefined4 *)(param_1 + 100),uVar2);
  if ((((local_180[0] != 0) || (local_180[0] = FUN_101f0dc2(local_130,local_12c), local_180[0] != 0)
       ) || (local_180[0] = FUN_101f11ca(), local_180[0] != 0)) ||
     (local_180[0] = FUN_101f0dc2(local_128,local_124), local_180[0] != 0)) goto LAB_101f0aca;
  *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) & 0xfe;
  piVar1 = *(int **)(param_1 + 0x214);
  if (piVar1 == (int *)0x0) {
LAB_101f08b0:
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  else {
    if (*piVar1 != 1 << (*(byte *)(piVar1 + 1) & 0x1f)) {
      FUN_101efdb9(param_1);
      piVar1 = *(int **)(param_1 + 0x214);
      if (piVar1 == (int *)0x0) goto LAB_101f08b0;
    }
    if ((piVar1[0x68] != 0) && (piVar1[0x68] != piVar1[1])) {
      piVar1[0x68] = 0;
      piVar1 = *(int **)(param_1 + 0x214);
      if (piVar1 == (int *)0x0) goto LAB_101f08b0;
    }
    if ((*piVar1 == 0) || (piVar1[1] == 0)) {
      FUN_101efdb9(param_1);
      piVar1 = *(int **)(param_1 + 0x214);
      if (piVar1 == (int *)0x0) goto LAB_101f08b0;
    }
    if (piVar1[0x22] == 0) {
      FUN_101efdb9(param_1);
      piVar1 = *(int **)(param_1 + 0x214);
      if (piVar1 == (int *)0x0) goto LAB_101f08b0;
    }
    if (piVar1[6] == 0) {
      FUN_101efdb9(param_1);
      piVar1 = *(int **)(param_1 + 0x214);
      if (piVar1 == (int *)0x0) goto LAB_101f08b0;
    }
    iVar5 = piVar1[1];
    if (iVar5 != 0) {
      piVar1 = piVar1 + 0x16;
      do {
        if ((char)*piVar1 == '\0') {
          FUN_101efdb9(param_1);
          if (*(int *)(param_1 + 0x214) == 0) goto LAB_101f08b0;
          break;
        }
        piVar1 = piVar1 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (*(int *)(param_1 + 0x220) != 0) {
      uVar2 = FUN_101c00c3(*(undefined4 *)(param_1 + 100),4,0,*(int *)(param_1 + 0x220),0,local_180)
      ;
      *(undefined4 *)(param_1 + 0x224) = uVar2;
      if (local_180[0] != 0) {
        *(undefined4 *)(param_1 + 0x220) = 0;
        goto LAB_101f0aca;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1a4) = local_e8;
  if (local_44 != 0) {
    *(undefined4 *)(param_1 + 0x194) = local_54;
    *(undefined4 *)(param_1 + 0x188) = local_50;
    *(undefined8 *)(param_1 + 0x198) = local_3c;
    *(undefined4 *)(param_1 + 0x1a0) = local_20;
    local_44 = 0;
    local_20 = 0;
  }
  if ((*(int *)(*(int *)(param_1 + 0x80) + 0x34) == 0) && (local_a8 == 0)) {
    local_180[0] = 3;
  }
  local_a8 = 0;
  *(undefined4 *)(param_1 + 0x18c) = local_b4;
  *(undefined8 *)(param_1 + 0x1ac) = local_a0;
  *(undefined4 *)(param_1 + 400) = local_e4;
  *(undefined4 *)(param_1 + 0x1a8) = local_d0;
  local_e4 = 0;
  local_190 = 0;
  local_d0 = 0;
  if (*(int *)(param_1 + 0x170) == 1) {
    local_194 = 0;
    if (0 < local_108) {
      local_194 = 0;
      local_190 = 0;
      iVar5 = 0;
      do {
        local_184 = *(char **)(local_104 + iVar5 * 4);
        *(undefined2 *)(*(int *)(param_1 + 0x180) + iVar5 * 2) = 0;
        *(char **)(*(int *)(param_1 + 0x184) + iVar5 * 4) = ".notdef";
        if ((local_184 != (char *)0x0) && (iVar4 = *(int *)(param_1 + 0x1a4), 0 < iVar4)) {
          local_188 = *(int *)(param_1 + 0x1a8);
          iVar6 = 0;
          local_18c = iVar5;
          do {
            _Str2 = *(char **)(local_188 + iVar6 * 4);
            iVar3 = _strcmp(local_184,_Str2);
            iVar5 = local_18c;
            if (iVar3 == 0) {
              *(short *)(*(int *)(param_1 + 0x180) + local_18c * 2) = (short)iVar6;
              *(char **)(*(int *)(param_1 + 0x184) + local_18c * 4) = _Str2;
              iVar4 = _strcmp(".notdef",_Str2);
              if (iVar4 != 0) {
                if (iVar5 < local_190) {
                  local_190 = iVar5;
                }
                if (local_194 <= iVar5 + 1) {
                  local_194 = iVar5 + 1;
                }
              }
              break;
            }
            iVar6 = iVar6 + 1;
          } while (iVar4 != iVar6);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_108);
    }
    *(int *)(param_1 + 0x178) = local_190;
    *(int *)(param_1 + 0x17c) = local_194;
    *(undefined4 *)(param_1 + 0x174) = local_11c;
  }
  if (1000 < *(uint *)(param_1 + 0x118)) {
    *(undefined4 *)(param_1 + 0x118) = 7;
  }
  if (1000 < *(uint *)(param_1 + 0x11c)) {
    *(undefined4 *)(param_1 + 0x11c) = 1;
  }
LAB_101f0aca:
  FUN_101f156a();
  if (DAT_10388d00 != (local_14 ^ (uint)&local_194)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_180[0];
}

