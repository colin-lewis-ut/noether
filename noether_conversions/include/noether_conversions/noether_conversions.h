/**
 * @file noether_conversions.h
 * @copyright Copyright (c) 2019, Southwest Research Institute
 *
 * @par License
 * Software License Agreement (Apache License)
 * @par
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0
 * @par
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <geometry_msgs/PoseArray.h>

#include <tool_path_planner/tool_path_planner_base.h>

namespace noether {

  std::vector<geometry_msgs::PoseArray> convertVTKtoGeometryMsgs(
      const std::vector<tool_path_planner::ProcessPath>& paths);

}

