/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003ef68 */

undefined8 * FUN_18003ef68(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)FUN_180239630(0x20);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(puVar4 + 1) = *param_2;
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar1;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *puVar4 = spdlog::details::
            elapsed_formatter<spdlog::details::null_scoped_padder,std::chrono::duration<__int64,std::ratio<1,1000000>_>_>
            ::vftable;
  uVar5 = _Xtime_get_ticks();
  puVar4[3] = uVar5;
  *param_1 = puVar4;
  return param_1;
}

