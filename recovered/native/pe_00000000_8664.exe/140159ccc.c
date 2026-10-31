/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140159ccc */

void FUN_140159ccc(longlong *param_1,char *param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  
  uVar4 = (param_3 - (int)param_2) * 8;
  if (*(uint *)((longlong)param_1 + 0x14) <= uVar4) {
    uVar4 = *(uint *)((longlong)param_1 + 0x14);
  }
  if (uVar4 != 0) {
    puVar1 = (undefined1 *)*param_1;
    iVar7 = *(int *)((longlong)param_1 + 0xc);
    uVar3 = 0x80;
    uVar6 = 0;
    cVar5 = '\0';
    uVar2 = uVar4;
    do {
      if (((uVar2 ^ uVar4) & 7) == 0) {
        cVar5 = *param_2;
        param_2 = param_2 + 1;
      }
      uVar6 = uVar6 | (int)cVar5 >> 7 & uVar3;
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) {
        *puVar1 = (char)uVar6;
        puVar1 = (undefined1 *)((longlong)(int)param_1[1] + *param_1);
        iVar7 = *(int *)((longlong)param_1 + 0xc);
        *param_1 = (longlong)puVar1;
LAB_140159d39:
        uVar6 = 0;
        uVar3 = 0x80;
      }
      else {
        uVar3 = uVar3 >> 1;
        if (uVar3 == 0) {
          *puVar1 = (char)uVar6;
          puVar1 = puVar1 + 1;
          goto LAB_140159d39;
        }
      }
      cVar5 = cVar5 * '\x02';
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    if (uVar3 != 0x80) {
      *puVar1 = (char)uVar6;
    }
  }
  return;
}

