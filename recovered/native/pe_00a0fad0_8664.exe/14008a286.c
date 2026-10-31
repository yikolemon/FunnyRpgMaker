/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008a286 */

void FUN_14008a286(longlong param_1,char *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_f8 [56];
  undefined8 local_c0;
  char *local_b8;
  char *local_b0;
  undefined1 local_a8 [32];
  uint local_88 [8];
  longlong local_68 [4];
  uint local_44 [3];
  
  local_44[1] = 0xfffffffe;
  local_44[2] = 0xffffffff;
  lVar1 = param_1 + 0x10;
  uVar2 = *(uint *)(param_1 + 0x38);
  local_44[0] = uVar2;
  iVar3 = FUN_14008aab0(lVar1);
  uVar4 = FUN_14008aab0(lVar1);
  local_88[0] = local_88[0] & 0xffffff00;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  FUN_14008c1de(local_68,uVar2 + iVar3);
  iVar3 = FUN_1400d1611((ulonglong)*(uint *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x30),
                        local_68[0] + (ulonglong)uVar2,uVar4,iVar3);
  if (-1 < iVar3) {
    local_88[0] = 0;
    FUN_14008a1ac(lVar1);
    FUN_140135ff0(local_68[0],(ulonglong)*(uint *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x30),
                  (ulonglong)uVar2);
    FUN_140089cca(lVar1,local_68);
    if (*param_2 == '\x01') {
      FUN_14008a1ac(lVar1,local_44);
    }
    FUN_140016e5c(local_68);
    return;
  }
  local_c0 = 0x1b000000b0;
  local_b8 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\FileCoder.hpp"
  ;
  local_b0 = "void __cdecl FileCoder::Unpack(const bool &)";
  FUN_140087f79(local_a8);
  FUN_14000ed8c(local_88,local_a8,"LZ4 decompression failed.");
  FUN_1400886d4(local_f8,local_88);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_f8,&DAT_1401a5720);
}

