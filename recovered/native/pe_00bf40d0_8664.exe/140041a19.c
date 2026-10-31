/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140041a19 */

undefined4 FUN_140041a19(longlong param_1,uint param_2,int *param_3,char param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  
  if ((*(char *)(param_1 + 0x401) != '\0') && (lVar6 = *(longlong *)(param_1 + 0x408), lVar6 != 0))
  {
    if (param_4 == '\0') {
      if (*(char *)(lVar6 + 0x40) == '\0') {
        uVar4 = FUN_140041af7(param_1,'\0');
        *(int *)(*(longlong *)(param_1 + 0x408) + 0x44) = (int)uVar4;
        lVar6 = *(longlong *)(param_1 + 0x408);
      }
      if (*(char *)(lVar6 + 0x41) == '\0') {
        return *(undefined4 *)(lVar6 + 0x44);
      }
      puVar5 = (undefined8 *)(lVar6 + 0x48);
    }
    else {
      if (*(char *)(lVar6 + 0x50) == '\0') {
        uVar4 = FUN_140041af7(param_1,'\x01');
        *(int *)(*(longlong *)(param_1 + 0x408) + 0x54) = (int)uVar4;
        lVar6 = *(longlong *)(param_1 + 0x408);
      }
      if (*(char *)(lVar6 + 0x51) == '\0') {
        return *(undefined4 *)(lVar6 + 0x54);
      }
      puVar5 = (undefined8 *)(lVar6 + 0x58);
    }
    puVar1 = (uint *)*puVar5;
    if (*(longlong *)(puVar1 + 0xc) == 0) {
      uVar7 = 0;
    }
    else {
      uVar2 = puVar1[8] - 1;
      if (param_2 < puVar1[8]) {
        uVar2 = param_2;
      }
      uVar7 = *(uint *)(*(longlong *)(puVar1 + 10) + (ulonglong)uVar2 * 4);
      param_2 = *(uint *)(*(longlong *)(puVar1 + 0xc) + (ulonglong)uVar2 * 4);
    }
    iVar3 = FUN_14003f21c(param_1,puVar1,uVar7,param_2);
    if (iVar3 != 0) {
      *param_3 = *param_3 + iVar3;
    }
  }
  return 0;
}

