const document = await collection1.findOne(filter);
let currentVolunteerInfo = document?.volunteerInfo || [];
currentVolunteerInfo.push(volunteerInfo);
const updateCondition = {
  $set: {
    volunteerInfo: currentVolunteerInfo,
    numberOfVolunteer: {
      $toInt: {
        $subtract: ["$numberOfVolunteer", 1],
      },
    },
  },
};

await collection1.findOneAndUpdate(filter, updateCondition);
