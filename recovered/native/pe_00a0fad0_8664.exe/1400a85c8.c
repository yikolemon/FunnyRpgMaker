/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a85c8 */

void FUN_1400a85c8(longlong param_1,longlong param_2,longlong *param_3,uint *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_68 [8];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *(longlong **)(param_1 + 0x50) = param_3;
  if ((ulonglong)*param_4 != 0) {
    lVar3 = 0;
    iVar4 = 0;
    iVar6 = 0;
    do {
      iVar5 = iVar6;
      iVar7 = iVar4;
      uVar1 = *(uint *)(*param_3 + 0x7c + lVar3);
      iVar4 = iVar7 + (uint)(uVar1 < 2000);
      iVar6 = (iVar5 + 1) - (uint)(uVar1 < 2000);
      lVar3 = lVar3 + 0x80;
    } while ((ulonglong)*param_4 << 7 != lVar3);
    if (iVar4 != 0) {
      iVar7 = iVar7 + (uint)(uVar1 < 2000);
      do {
        local_68[0] = FUN_14008aab0(param_2 + 0x10);
        puVar2 = *(undefined4 **)(param_1 + 0x28);
        if (puVar2 == *(undefined4 **)(param_1 + 0x30)) {
          FUN_14009c238(param_1 + 0x20,puVar2,local_68);
        }
        else {
          *puVar2 = local_68[0];
          *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 4;
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (iVar6 != 0) {
      iVar4 = (iVar5 + 1) - (uint)(uVar1 < 2000);
      do {
        FUN_14009aeee(param_2,local_68);
        FUN_1400436a6(param_1 + 0x38,local_68);
        FUN_140005242(local_68);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

