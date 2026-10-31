/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045458d */

void __fastcall FUN_0045458d(int *param_1,char *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  char *local_1c;
  
  uVar6 = (param_3 - (int)param_2) * 8;
  if ((uint)param_1[4] <= uVar6) {
    uVar6 = param_1[4];
  }
  if (uVar6 != 0) {
    puVar5 = (undefined1 *)*param_1;
    iVar4 = param_1[2];
    uVar3 = 0x80;
    uVar2 = 0;
    cVar1 = '\0';
    uVar7 = uVar6;
    local_1c = param_2;
    do {
      if (((uVar7 ^ uVar6) & 7) == 0) {
        cVar1 = *local_1c;
        local_1c = local_1c + 1;
      }
      uVar2 = uVar2 | (int)cVar1 >> 7 & uVar3;
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) {
        *puVar5 = (char)uVar2;
        puVar5 = (undefined1 *)(*param_1 + param_1[1]);
        iVar4 = param_1[2];
        *param_1 = (int)puVar5;
LAB_004545fd:
        uVar2 = 0;
        uVar3 = 0x80;
      }
      else {
        uVar3 = uVar3 >> 1;
        if (uVar3 == 0) {
          *puVar5 = (char)uVar2;
          puVar5 = puVar5 + 1;
          goto LAB_004545fd;
        }
      }
      cVar1 = cVar1 * '\x02';
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    if (uVar3 != 0x80) {
      *puVar5 = (char)uVar2;
    }
  }
  return;
}

